/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:31:43 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/13 08:03:22 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"phone_book.hpp"

int				contact::is_exist(void)
{
	if (firstName.empty())
		return	(0);
	else
		return	(1);
}

void			contact::fill(void)
{
	std::string	_inp;


	std::cout	<< "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
	

	std::cout	<< "- " << ANSI_CYA << "✏️ Enter your FIRST NAME!" << ANSI_RES << std::endl << "  : ";
	getline(std::cin, _inp);
	while (!_inp.size())
	{
		std::cout	<< "- " << ANSI_YEL << "😓 You must input FIRST NAME! It's mandatory." << ANSI_RES << std::endl << "  : ";
		getline(std::cin, _inp);
	}
	firstName = _inp;
	
	
	std::cout	<< "- " << ANSI_CYA << "✏️ Enter your LAST NAME!" << ANSI_RES << std::endl << "  : ";
	getline(std::cin, _inp);
	while (!_inp.size())
	{
		std::cout	<< "- " << ANSI_YEL << "😓 You must input LAST NAME! It's mandatory." << ANSI_RES << std::endl << "  : ";
		getline(std::cin, _inp);
	}
	lastName = _inp;


	std::cout	<< "- " << ANSI_CYA << "🎭 Enter your NICK NAME!" << ANSI_RES << std::endl << "  : ";
	getline(std::cin, _inp);
	while (!_inp.size())
	{
		std::cout	<< "- " << ANSI_YEL << "😓 You must input NICK NAME! It's mandatory." << ANSI_RES << std::endl << "  : ";
		getline(std::cin, _inp);
	}
	nickName = _inp;


	std::cout	<< "- " << ANSI_CYA << "☎️ Enter your PHONE NUMBER!" << ANSI_RES << std::endl << "  : ";
	getline(std::cin, _inp);
	while (!_inp.size())
	{
		std::cout	<< "- " << ANSI_YEL << "😓 You must input PHONE NUMBER! It's mandatory." << ANSI_RES << std::endl << "  : ";
		getline(std::cin, _inp);
	}
	phoneNumber = _inp;


	std::cout	<< "- " << ANSI_CYA << "🕵🏻‍♂️ Enter your DARKEST SECRET!" << ANSI_RES << std::endl << "  : ";
	getline(std::cin, _inp);
	while (!_inp.size())
	{
		std::cout	<< "- " << ANSI_YEL << "😼 You must input DARKEST SECRET! It's mandatory." << ANSI_RES << std::endl << "  : ";
		getline(std::cin, _inp);
	}
	darkestSecret = _inp;


	std::cout	<< "- " << ANSI_CYA << "🩲 Enter your UNDERWARE COLOR!" << ANSI_RES << std::endl << "  : ";
	getline(std::cin, _inp);
	while (!_inp.size())
	{
		std::cout	<< "- " << ANSI_YEL << "🙄 You must input UNDERWARE COLOR! It's mandatory." << ANSI_RES << std::endl << "  : ";
		getline(std::cin, _inp);
	}
	underwareColor = _inp;

	
	std::cout	<< "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl << std::endl;
}

void			contact::clear(void)
{
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
	underwareColor = "";
}

void			contact::display(int _idx)
{
	std::cout << "         " << _idx + 1;
	display_template(firstName);
	display_template(lastName);
	display_template(nickName);
}

void			contact::display_template(std::string _str)
{
	int			_spc;
	int			_idx;

	_spc = 10 - _str.size();
	if (_spc < 0)
		std::cout	<< "|" << _str.substr(0, 9) << ".";
	else
	{
		std::cout	<< "|";
		for (_idx = 0; _idx < _spc; ++_idx)
			std::cout	<< " ";
		std::cout	<< _str;
	}
}