/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:07:40 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:32 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_RES << "Default constructor"
						<< std::endl;
}

AMateria::AMateria(const std::string& _typ)
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_RES << "Default constructor with parameter "
						<< ANSI_YEL << "TYPE"
						<< ANSI_RES << std::endl;
	this->_typ			= _typ;
}

AMateria::AMateria(const AMateria& _cpy)
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_YEL << "COPY "
						<< ANSI_RES << "constructor"
						<< std::endl;
	*this				= _cpy;
}

AMateria&				AMateria::operator=(const AMateria& _cpy)
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_RES << "= Assignment"
						<< std::endl;
	if (this != &_cpy)
		this->_typ = _cpy._typ;
	return				*this;
}

AMateria::~AMateria(void)
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_RES << "Default constructor"
						<< std::endl;
}

std::string const&		AMateria::getType() const
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_YEL << "GET TYPE "
						<< ANSI_RES << "function. The result is "
						<< ANSI_CYA << this->_typ
						<< ANSI_RES << std::endl;
	return				this->_typ;
}

void					AMateria::use(ICharacter&)
{
	std::cout			<< ANSI_GRE << "[AMateria] "
						<< ANSI_YEL << "USE "
						<< ANSI_RES << "function."
						<< ANSI_RES << std::endl;
}