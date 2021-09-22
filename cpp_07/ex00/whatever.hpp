/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:27:04 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/22 11:48:02 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					WHATEVER_HPP
# define					WHATEVER_HPP

# include					<iostream>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

template					<typename _typ>
void						swap(_typ& _ar1, _typ& _ar2)
{
	_typ					_tmp;
	
	_tmp					= _ar1;
	_ar1					= _ar2;
	_ar2					= _tmp;
}

template					<typename _typ>
_typ						min(_typ _ar1, _typ _ar2)
{
	if (_ar2 > _ar1)
		return				_ar1;
	return					_ar2;
}

template					<typename _typ>
_typ						max(_typ _ar1, _typ _ar2)
{
	if (_ar2 < _ar1)
		return				_ar1;
	return					_ar2;
}

# endif