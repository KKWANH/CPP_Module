/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:06:01 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 21:26:02 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Fixed.hpp"



Fixed::Fixed()
{
	this->_val = 0;
}

Fixed::Fixed(const Fixed &_fix)
{
	this->_val = _fix.getRawBits();
}

Fixed::Fixed(float const _val)
{
	this->_val = _val;
}

Fixed::Fixed(int   const _val)
{
	this->_val = _val << Fixed::_bit;
}

Fixed::~Fixed()
{
}



Fixed&			Fixed::operator=(const Fixed &_fix)
{
	this->_val	= _fix.getRawBits();
	return		*this;
}

std::ostream	&operator<<(std::ostream &_out, const Fixed &_opt)
{
	_out		<< _opt.toFloat();
	return		_out;
}

Fixed&			Fixed::operator+(const Fixed &_fix)
{
	this->_val	+= _fix._val;
	return		*this;
}

Fixed&			Fixed::operator-(const Fixed &_fix)
{
	this->_val	-= _fix._val;
	return		*this;
}

Fixed&			Fixed::operator*(const Fixed &_fix)
{
	this->_val	*= _fix._val;
	return		*this;
}

Fixed&			Fixed::operator/(const Fixed &_fix)
{
	this->_val	/= _fix._val;
	return		*this;
}

Fixed&			Fixed::operator++()
{
	++this->_val;
	return		*this;
}

Fixed			Fixed::operator++(int)
{
	Fixed		_tmp = *this;
	++*this;
	return		_tmp;
}

Fixed&			Fixed::operator--()
{
	--this->_val;
	return		*this;
}

Fixed			Fixed::operator--(int)
{
	Fixed		_tmp = *this;
	--*this;
	return		_tmp;
}

bool			Fixed::operator>(const Fixed &_fix)
{
	return		(this->_val > _fix._val);
}

bool			Fixed::operator<(const Fixed &_fix)
{
	return		(this->_val < _fix._val);
}

bool			Fixed::operator<=(const Fixed &_fix)
{
	return		(this->_val <= _fix._val);
}

bool			Fixed::operator>=(const Fixed &_fix)
{
	return		(this->_val >= _fix._val);
}

bool			Fixed::operator==(const Fixed &_fix)
{
	return		(this->_val == _fix._val);
}

bool			Fixed::operator!=(const Fixed &_fix)
{
	return		(this->_val != _fix._val);
}



int				Fixed::getRawBits(void) const
{
	return		this->_val;
}

void			Fixed::setRawBits(int const _row)
{
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



Fixed			Fixed::max(Fixed &_fxA, Fixed &_fxB)
{
	if (_fxA < _fxB)
		return	_fxB;
	else
		return	_fxA;
}

Fixed			Fixed::min(Fixed &_fxA, Fixed &_fxB)
{
	if (_fxA > _fxB)
		return	_fxB;
	else
		return	_fxA;
}

const Fixed		Fixed::max(const Fixed &_fxA, const Fixed &_fxB)
{
	Fixed		_tmp(_fxA);

	if (_tmp < _fxB)
		return	_fxB;
	else
		return	_fxA;
}

const Fixed		Fixed::min(const Fixed &_fxA, const Fixed &_fxB)
{
	Fixed		_tmp(_fxA);

	if (_tmp > _fxB)
		return	_fxB;
	else
		return	_fxA;
}