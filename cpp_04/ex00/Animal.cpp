/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/25 22:13:42 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"Animal.hpp"

Animal::Animal(void)
{
	std::cout			<< ANSI_GRE << "[Animal] "
						<< ANSI_RES << "Default constructor" << std::endl;
	this->type			= "Animal";
}

Animal::Animal(const Animal& _cpy)
{
	std::cout			<< ANSI_GRE << "[Animal] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	this->type			= _cpy.type;
}

Animal::~Animal(void)
{
	std::cout			<< ANSI_GRE << "[Animal] "
						<< ANSI_RES << "Default destructor" << std::endl;
}

Animal&					Animal::operator=(const Animal& _cpy)
{
	std::cout			<< ANSI_GRE << "[Animal] "
						<< ANSI_RES << "= assignment" << std::endl;
	this->type			= _cpy.type;
	return				*this;
}

std::string				Animal::getType(void) const
{
	return				this->type;
}

void					Animal::makeSound(void) const
{
	std::cout			<< ANSI_GRE << "[Animal] "
						<< ANSI_RES << "He just says "
						<< ANSI_YEL << "\"Animal\""
						<< ANSI_RES << "... Isn't it weird?" << std::endl;
}