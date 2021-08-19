/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:12:44 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 00:59:52 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Fixed.hpp"

int				main(void)
{
	Fixed		_fxA;
	Fixed		_fxB(_fxA);
	Fixed		_fxC;

	_fxC = _fxB;

	std::cout	<< _fxA.getRawBits() << std::endl;
	std::cout	<< _fxB.getRawBits() << std::endl;
	std::cout	<< _fxC.getRawBits() << std::endl;

	return		0;
}