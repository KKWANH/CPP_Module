/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:02:21 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 01:52:19 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"span.hpp"

int							main(void)
{
	srand(time(NULL));
	Span					_spn = Span(10000);
	
	try
	{
		_spn.addNumber(0, 9999);
	}
	catch (std::exception &e)
	{	std::cout			<< e.what() << std::endl;	}
	
	try
	{
		std::cout			<< _spn.shortestSpan() << std::endl;
		std::cout			<< "----------------" << std::endl;
		std::cout			<< _spn.longestSpan() << std::endl;
		std::cout			<< "----------------" << std::endl;
		std::vector<int>	_arr = _spn.getArr();
		for (size_t _idx = 0; _idx < _arr.size(); _idx++)
			std::cout		<< _arr[_idx] << std::endl;
		std::cout			<< "----------------" << std::endl;
		std::cout			<< _spn.shortestSpan() << std::endl;
		std::cout			<< "----------------" << std::endl;
		std::cout			<< _spn.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{	std::cout << e.what() << std::endl;	}
}
