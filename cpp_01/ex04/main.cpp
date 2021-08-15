/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:17:37 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 18:41:35 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include			<iostream>
# include			<fstream>
# include			<string>

# define			ANSI_RES	"\e[0;0m"
# define			ANSI_BOL	"\e[0;1m"
# define			ANSI_ITA	"\e[0;3m"
# define			ANSI_RED	"\e[0;31m"
# define			ANSI_GRE	"\e[0;32m"
# define			ANSI_YEL	"\e[0;33m"
# define			ANSI_BLU	"\e[0;34m"
# define			ANSI_MAG	"\e[0;35m"
# define			ANSI_CYA	"\e[0;36m"

std::string			ft_replace(std::string _str, std::string _pre, std::string _nxt)
{
	std::string		_tmp = "";
	int				_idx = 0;

	while (true)
	{
		if ((_idx = _str.find(_pre, _idx)) == -1)
		{
			_tmp += _str.substr(0);
			std::cout	<< _tmp << std::endl;
			return	(_tmp);
		}
		else
		{
			_tmp += _str.substr(0, _idx);
			_tmp += _nxt;
			_idx += _pre.length();
			_str = _str.substr(_idx);
		}
	}
}

int					main(int _arc, char *_arv[])
{
	if (_arc != 4)
	{
		std::cout	<< ANSI_RED << "[ERROR] "
					<< ANSI_YEL << "Wrong arguments."
					<< ANSI_RES << std::endl;
		return		(0);
	}

	std::string		_fil(_arv[1]);
	std::string		_pre(_arv[2]);
	std::string		_nxt(_arv[3]);
	std::ifstream	_ifs;
	std::ofstream	_ofs;

	if (!_pre.length() || !_nxt.length())
	{
		std::cout	<< ANSI_RED << "[ERROR] "
					<< ANSI_YEL << "Empty strings."
					<< ANSI_RES << std::endl;
		return		(0);
	}
	_ifs.open(_fil, std::fstream::in);
	if (!_ifs.is_open())
	{
		std::cout	<< ANSI_RED << "[ERROR] "
					<< ANSI_YEL << "No such file."
					<< ANSI_RES << std::endl;
		return		(0);
	}
	else
	{
		_ofs.open(_fil + ".replace", std::fstream::out | std::ios::trunc);
		std::cout 	<< ANSI_YEL << "--------------- [RESULT] ---------------" << ANSI_RES << std::endl << std::endl;
		while (!_ifs.eof())
		{
			std::string	_str;
			getline(_ifs, _str);
			_ofs	<< ft_replace(_str, _pre, _nxt);
			_ofs	<< '\n';

		}
		_ifs.close();
		_ofs.close();
		std::cout 	<< ANSI_YEL << "----------------------------------------" << ANSI_RES << std::endl;
	}
}