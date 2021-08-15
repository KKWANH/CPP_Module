/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:11:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 22:13:38 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"phone_book.hpp"

void			ft_print_menu(void)
{
	std::cout	<< "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
	std::cout	<< ANSI_BOL ANSI_GRE << "Welcome to 🎹KKIM's CPP00 - Phone book!" << ANSI_RES << std::endl;
	std::cout	<< "- " << ANSI_CYA << "EXIT" << ANSI_RES << std::endl;
	std::cout	<< "- " << ANSI_CYA << "ADD" << ANSI_RES << std::endl;
	std::cout	<< "- " << ANSI_CYA << "SEARCH" << ANSI_RES << std::endl;
	std::cout	<< "Press enter some keywords to process. 💻" << ANSI_RES << std::endl;
	std::cout	<< "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl << " : ";
}

void			ft_add(contact *_ctt)
{
	std::string	_inp;
	int			_idx = 0;

	while (1)
	{
		std::cout	<< std::endl;
		while (_ctt[_idx].is_exist() && _idx < 8)
			++_idx;
		if (_idx >= 8)
			_idx = 0;
		_ctt[_idx].clear();
		_ctt[_idx].fill();
		std::cout	<< ANSI_YEL << "- 🙋 Do you want add some more? (Y/N)" << ANSI_RES << std::endl;
		while (1)
		{
			std::cout	<< "  : ";
			getline(std::cin, _inp);
			if (_inp == "Y")
				break ;
			else if (_inp == "N")
				return ;
			else
				continue ;
		}
	}
}

void			ft_search(contact *_ctt)
{
	std::string	_inp;
	int			_idx = 0;

	if (!_ctt[0].is_exist())
		std::cout	<< " - " << ANSI_RED << "⚠️ WRONG COMMAND ⚠️" << ANSI_RES << std::endl;
	else
	{
		while (_ctt[_idx].is_exist() && _idx < 8)
		{
			_ctt[_idx].display(_idx);
			++_idx;
			std::cout	<< std::endl;
		}
		std::cout	<< ANSI_YEL << "- 🙋 Let me know if you want to search specific one! (number:1~8/N)" << ANSI_RES << std::endl;
		while (1)
		{
			std::cout	<< "  : ";
			getline(std::cin, _inp);
			if (_inp >= "1" && _inp <= "8")
			{
				_ctt[atoi(_inp.c_str()) - 1].display(atoi(_inp.c_str()) - 1);
				std::cout	<< std::endl;
				continue ;
			}
			else if (_inp == "N")
				return ;
			else
				continue ;
		}
	}
}

void			ft_exit(void)
{
	std::cout	<< std::endl;
	std::cout	<< "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
	std::cout	<< ANSI_CYA << "🖐 Closing applications ... THANK YOU FOR USE 🖐" << ANSI_RES << std::endl;
	std::cout	<< "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl << std::endl;
	exit(0);
}

int				main(void)
{
	std::string	_cmd;
	std::string	_inp;
	contact		_ctt[8];
	
	while (1)
	{
		ft_print_menu();
		getline(std::cin, _cmd);
		if (_cmd == "ADD")
			ft_add(_ctt);
		else if (_cmd == "EXIT")
			ft_exit();
		else if (_cmd == "SEARCH")
			ft_search(_ctt);
		else
			std::cout	<< " - " << ANSI_RED << "⚠️ WRONG COMMAND ⚠️" << ANSI_RES << std::endl;
		std::cout	<< std::endl;
	}
}