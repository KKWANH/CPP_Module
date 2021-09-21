/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:30:58 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 17:16:33 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"data.hpp"

Data::Data(void)
:	_st1(""),
	_st2(""),
	_num(0)
{
	std::cout				<< ANSI_GRE << "[Data] "
							<< ANSI_RES << "Default constructor!"
							<< ANSI_RES << std::endl;
}

Data::Data(std::string _st1, std::string _st2, int _num)
:	_st1(_st1),
	_st2(_st2),
	_num(_num)
{
	std::cout				<< ANSI_GRE << "[Data] "
							<< ANSI_RES << "Default constructor with parameter!"
							<< ANSI_RES << std::endl;
}

Data::Data(const Data& _cpy)
:	_st1(_cpy._st1),
	_st2(_cpy._st2),
	_num(_cpy._num)
{
	std::cout				<< ANSI_GRE << "[Data] "
							<< ANSI_RES << "Copy constructor!"
							<< ANSI_RES << std::endl;
}

Data::~Data(void)
{
	std::cout				<< ANSI_GRE << "[Data] "
							<< ANSI_RES << "Default destructor!"
							<< ANSI_RES << std::endl;
}

Data&						Data::operator=(const Data& _cpy)
{
	std::cout				<< ANSI_GRE << "[Data] "
							<< ANSI_RES << "= Assignment!"
							<< ANSI_RES << std::endl;
	this->_st1				= _cpy._st1;
	this->_st2				= _cpy._st2;
	this->_num				= _cpy._num;
	return					*this;
}

std::string					Data::getArg_st1(void) const
{
	return					this->_st1;
}

std::string					Data::getArg_st2(void) const
{
	return					this->_st2;
}

int							Data::getArg_num(void) const
{
	return					this->_num;
}



uintptr_t					serialize(Data *_ptr)
{
	return					reinterpret_cast<uintptr_t>(_ptr);
}

Data*						deserialize(uintptr_t _raw)
{
	return					reinterpret_cast<Data *>(_raw);
}