/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:04:40 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 00:50:28 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					EASYFIND_HPP
# define					EASYFIND_HPP

# include					<iostream>
# include					<string>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_BLC	"\e[0;30m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

template					<typename _typ>
int							easyfind(_typ _con, int _num)
{
	typename				_typ::iterator _itr;
	if ((_itr = find(_con.begin(), _con.end(), _num)) == _con.end())
		throw				std::exception();
	return					*_itr;
}

# endif