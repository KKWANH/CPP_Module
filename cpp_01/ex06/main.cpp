/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:17:37 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 22:09:03 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include			"Karen.hpp"

e_level				ft_enum_level(const std::string& _typ)
{
	if (_typ == "DEBUG")
		return		DEBUG;
	if (_typ == "INFO")
		return		INFO;
	if (_typ == "WARNING")
		return		WARNING;
	if (_typ == "ERROR")
		return		ERROR;
	return			NORMAL;
}

int					main(int _arc, char *_arv[])
{
	Karen			_krn;

	if (_arc != 2)
	{
		std::cout	<< ANSI_RED << "[ERROR] " << ANSI_YEL
					<< "Arguments are too many or too few" << ANSI_RES << std::endl;
		return		0;
	}
	else
	{
		switch (ft_enum_level(_arv[1]))
		{
			case DEBUG:
				_krn.complain("DEBUG");
			case INFO:
				_krn.complain("INFO");
			case WARNING:
				_krn.complain("WARNING");
			case ERROR:
				_krn.complain("ERROR");
				break ;
			default:
				std::cout	<< ANSI_MAG << "[...?]" << ANSI_RES << std::endl
							<< "Probably complaining about insignificant problems.." << std::endl;
				break ;
		}
	}
	return			0;
}