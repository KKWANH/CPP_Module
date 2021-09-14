/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:24 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout			<< ANSI_GRE << "[WrongCat] "
						<< ANSI_RES << "Default constructor" << std::endl;
	this->type			= "WrongCat";
}

WrongCat::WrongCat(const WrongCat& _cpy)
{
	std::cout			<< ANSI_GRE << "[WrongCat] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	this->type			= _cpy.type;
}

WrongCat::~WrongCat(void)
{
	std::cout			<< ANSI_GRE << "[WrongCat] "
						<< ANSI_RES << "Default destructor" << std::endl;
}

WrongCat&				WrongCat::operator=(const WrongCat& _cpy)
{
	std::cout			<< ANSI_GRE << "[WrongCat] "
						<< ANSI_RES << "= assignment" << std::endl;
	this->type			= _cpy.type;
	return				*this;
}

std::string				WrongCat::getType(void) const
{
	return				this->type;
}

void					WrongCat::makeSound(void) const
{
	std::cout			<< ANSI_GRE << "[WrongCat] "
						<< ANSI_RES << "This creature is "
						<< ANSI_YEL << "THE MOST CUTE ONE IN THE WORLD"
						<< ANSI_RES << "... but the fake. Don't raugh." << std::endl;
}