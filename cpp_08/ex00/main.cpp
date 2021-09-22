/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:30:40 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 01:13:25 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					<iostream>
# include					<vector>
# include					<queue>
# include					"easyfind.hpp"

void						_test_vector(int _cnt)
{
	std::vector<int>		_vec(_cnt);

	for (int _idx = 0; _idx < _cnt; _idx++)
		_vec.push_back(_idx);
	try
	{
		std::cout			<< ANSI_GRE << std::endl << "[Main] "
							<< ANSI_YEL << "[Easyfind] [Vector]"
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "       [";
		for (int _idx = 0; _idx < _cnt; _idx++)
		{
			std::cout		<< _vec.at(_idx);
			if (_idx != _cnt - 1)
				std::cout	<< " ";
		}
		std::cout			<< "] "
							<< ANSI_MAG << "[1]"
							<< ANSI_RES << std::endl
							<< ANSI_GRE << "       [RESULT] ";
		std::cout			<< ANSI_RES << easyfind(_vec, 1) << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout			<< ANSI_RED << "cannot find"
							<< ANSI_RES << std::endl << std::endl;
	}
	try
	{
		std::cout			<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[Easyfind] [Vector]"
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "       [";
		for (int _idx = 0; _idx < _cnt; _idx++)
		{
			std::cout		<< _vec.at(_idx);
			if (_idx != _cnt - 1)
				std::cout	<< " ";
		}
		std::cout			<< "] "
							<< ANSI_MAG << "[-1]"
							<< ANSI_RES << std::endl;
		std::cout			<< ANSI_GRE << "       [RESULT] "
							<< ANSI_RES << easyfind(_vec, -1) << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout			<< ANSI_RED << "cannot find"
							<< ANSI_RES << std::endl << std::endl;
	}
}

void						_test_deque(int _cnt)
{
	std::deque<int>			_deq;

	for (int _idx = 0; _idx < _cnt; _idx++)
		_deq.push_back(_idx);
	try
	{
		std::cout			<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[Easyfind] [Deque]"
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "       [";
		for (int _idx = 0; _idx < _cnt; _idx++)
		{
			std::cout		<< _deq.at(_idx);
			if (_idx != _cnt - 1)
				std::cout	<< " ";
		}
		std::cout			<< "] "
							<< ANSI_MAG << "[1]"
							<< ANSI_RES << std::endl
							<< ANSI_GRE << "       [RESULT] ";
		std::cout			<< ANSI_RES << easyfind(_deq, 1) << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout			<< ANSI_RED << "cannot find"
							<< ANSI_RES << std::endl << std::endl;
	}
	try
	{
		std::cout			<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[Easyfind] [Deque]"
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "       [";
		for (int _idx = 0; _idx < _cnt; _idx++)
		{
			std::cout		<< _deq.at(_idx);
			if (_idx != _cnt - 1)
				std::cout	<< " ";
		}
		std::cout			<< "] "
							<< ANSI_MAG << "[-1]"
							<< ANSI_RES << std::endl;
		std::cout			<< ANSI_GRE << "       [RESULT] "
							<< ANSI_RES << easyfind(_deq, -1) << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout			<< ANSI_RED << "cannot find"
							<< ANSI_RES << std::endl << std::endl;
	}
}

int							main(void)
{
	_test_vector(3);
	_test_deque(3);
}