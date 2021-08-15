/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:01:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 19:44:35 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include			"Karen.hpp"

Karen::Karen(void) 
{}

Karen::~Karen(void) 
{}

void				Karen::debug(void)
{
	std::cout		<< ANSI_GRE << "[DEBUG]" << ANSI_RES << std::endl
					<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void				Karen::info(void)
{
	std::cout		<< ANSI_CYA << "[INFO]" << ANSI_RES << std::endl
					<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void				Karen::warning(void)
{
	std::cout		<< ANSI_YEL << "[WARNING]" << ANSI_RES << std::endl
					<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void				Karen::error(void)
{
	std::cout		<< ANSI_RED << "[ERROR]" << ANSI_RES << std::endl
					<< "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::_typ const	Karen::_lst[] =
{
	{"DEBUG",		&Karen::debug},
	{"INFO",		&Karen::info},
	{"WARNING",		&Karen::warning},
	{"ERROR",		&Karen::error}
};

void				Karen::complain(std::string _lvl)
{
	for (int _idx=0; _idx<4; _idx++)
		if (_lvl == Karen::_lst[_idx]._nam)
			return	(this->*(_lst[_idx]._fun))();
	std::cout		<< ANSI_MAG << "[DEFAULT]" << ANSI_RES << std::endl
					<< "Keren cannot create " << _lvl << std::endl;
}
