/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 05:52:05 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/13 06:09:55 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include	<iostream>
# include	<cctype>

# define	ANSI_RES	"\e[0;0m"
# define	ANSI_BOL	"\e[0;1m"
# define	ANSI_ITA	"\e[0;3m"
# define	ANSI_RED	"\e[0;31m"
# define	ANSI_GRE	"\e[0;32m"
# define	ANSI_YEL	"\e[0;33m"
# define	ANSI_BLU	"\e[0;34m"
# define	ANSI_MAG	"\e[0;35m"
# define	ANSI_CYA	"\e[0;36m"

int			ft_print_colorful(std::string str)
{
	int		idx = 0;
	int		cdx = 1;

	std::cout << ANSI_BOL;
	while (str[idx])
	{
		if (cdx == 1)
			std::cout << ANSI_RED;
		else if (cdx == 2)
			std::cout << ANSI_GRE;
		else if (cdx == 3)
			std::cout << ANSI_YEL;
		else if (cdx == 4)
			std::cout << ANSI_BLU;
		else if (cdx == 5)
			std::cout << ANSI_MAG;
		else if (cdx == 6)
			std::cout << ANSI_CYA;
		++cdx;
		if (cdx == 7)
			cdx = 0;
		std::cout << (char)toupper(str[idx++]);
	}
	std::cout << ANSI_RES;
	return	(idx);
}

int			main(int arc, char **arv)
{
	int		idx = 1;

	if (arc == 1)
	{
		ft_print_colorful("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		std::cout << std::endl;
	}
	else
	{
		while (arv[idx])
			ft_print_colorful(arv[idx++]);
		std::cout << std::endl;
	}
	return (0);
}