/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:15:29 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:00:03 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include		"Fixed.hpp"

int				main(void)
{
    Fixed		_fxA;
    Fixed const	_fxB(10);
    Fixed const	_fxC(42.42f);
    Fixed const	_fxD(_fxB);

    _fxA = Fixed(1234.4321f);

    std::cout	<< "a is " << _fxA << std::endl;
    std::cout	<< "b is " << _fxB << std::endl;
    std::cout	<< "c is " << _fxC << std::endl;
    std::cout	<< "d is " << _fxD << std::endl;

    std::cout	<< "a is " << _fxA.toInt() << " as integer" << std::endl;
    std::cout	<< "b is " << _fxB.toInt() << " as integer" << std::endl;
    std::cout	<< "c is " << _fxC.toInt() << " as integer" << std::endl;
    std::cout 	<< "d is " << _fxD.toInt() << " as integer" << std::endl;

    return 0;
}
