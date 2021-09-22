/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/22 15:41:34 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					<iostream>
# include					<string>
# include					"Array.hpp"

#define						MAX_VAL 30

void						my_print_idx(int _idx)
{
	std::cout				<< ANSI_GRE << "[";
	if (_idx < 10)
		std::cout			<< "0";
	std::cout				<< _idx << "] " << ANSI_RES;
}

void						my_print_num(std::string _clr, int _num)
{
	std::string				_str = std::to_string(_num);

	std::cout				<< _clr << "[";
	if (_str.size() != 10)
		for (int _idx = 0; _idx < (10 - (int)_str.size()); _idx++)
			std::cout		<< "0";
	std::cout				<< _num << "] " << ANSI_RES;
}

int							main(void)
{
	Array<int>				_inA(MAX_VAL);
	int*					_inC = new int[MAX_VAL];
	srand(time(NULL));
	for (int _idx = 0; _idx < MAX_VAL; _idx++)
	{
		const int			_val = rand();
		_inA[_idx]			= _val;
		_inC[_idx]			= _val;
	}

	Array<int>				_tmp = _inA;
	_tmp[0]					= 100000;
	_tmp[MAX_VAL / 2]		= 100000;
	Array<int>				_tst(_tmp);

	for (int _idx = 0; _idx < MAX_VAL; _idx++)
	{
		my_print_idx(_idx);
		my_print_num(ANSI_MAG, _inA[_idx]);
		my_print_num(ANSI_CYA, _inC[_idx]);
		my_print_num(ANSI_YEL, _tmp[_idx]);
		std::cout			<< std::endl;
		if (_inC[_idx] != _inA[_idx])
		{
			std::cerr		<< "didn't save the same value!" << std::endl;
			return 1;
		}
	}
	
	try
	{
		_inA[-2] = 0;
	}
	catch (const std::exception &e)
	{ std::cerr				<< e.what() << '\n'; }
	
	try
	{
		_inA[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{ std::cerr				<< e.what() << '\n'; }

	delete[]				_inC;
	system("leaks array");
	return					0;
}
