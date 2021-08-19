/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:06:01 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 00:59:35 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Fixed.hpp"

Fixed::Fixed()
{
	this->_val = 0;
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Default constructor called!" << std::endl;
}

Fixed::Fixed(Fixed const &_fix)
{
	this->_val = _fix.getRawBits();
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Copy constructor called!" << std::endl;
}

Fixed::~Fixed()
{
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Default destructor called!" << std::endl;
}

Fixed&			Fixed::operator=(Fixed const &_fix)
{
	this->_val = _fix.getRawBits();
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Assignation destructor called!" << std::endl;
	return		*this;
}

int				Fixed::getRawBits(void) const
{
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "getRawBits member function called!" << std::endl;
	return		this->_val;
}

void			Fixed::setRawBits(int const _row)
{
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "setRawBits member function called!" << std::endl;
	this->_val	= _row;
}