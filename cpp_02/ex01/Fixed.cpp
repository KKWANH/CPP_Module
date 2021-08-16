/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:06:01 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 19:28:04 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Fixed.hpp"

Fixed::Fixed()
{
	this->_val = 0;
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Default constructor called!" << std::endl;
}

Fixed::Fixed(const Fixed &_fix)
{
	this->_val = _fix.getRawBits();
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Copy constructor called!" << std::endl;
}

Fixed::Fixed(float const _val)
{
	this->_val = _val;
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Float constructor called!" << std::endl;
}

Fixed::Fixed(int   const _val)
{
	this->_val = _val << Fixed::_bit;
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Float constructor called!" << std::endl;
}

Fixed::~Fixed()
{
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Default destructor called!" << std::endl;
}

Fixed&			Fixed::operator=(const Fixed &_fix)
{
	this->_val = _fix.getRawBits();
	std::cout	<< ANSI_GRE << "[INFO] " << ANSI_RES
				<< "Assignation destructor called!" << std::endl;
	return		*this;
}

std::ostream	&operator<<(std::ostream &_out, const Fixed &_opt)
{
	_out		<< _opt.toFloat();
	return		_out;
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

float			Fixed::toFloat(void) const
{
	return		(float)this->_val / (float)(1 << Fixed::_bit);
}

int				Fixed::toInt(void) const
{
	return		this->_val >> Fixed::_bit;
}