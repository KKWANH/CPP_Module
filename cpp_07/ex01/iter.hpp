/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:27:04 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/22 13:10:02 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					ITER_HPP
# define					ITER_HPP

# include					<iostream>

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
void						iter(_typ* _ptr, unsigned int _len, void (*_fnc)(const _typ& _arr))
{
	for (unsigned int _idx = 0; _idx < _len; _idx++)
		(*_fnc)(_ptr[_idx]);
}


# endif