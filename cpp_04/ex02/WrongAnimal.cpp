/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/25 22:03:13 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout			<< ANSI_GRE << "[WrongAnimal] "
						<< ANSI_RES << "Default constructor" << std::endl;
	this->type			= "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& _cpy)
{
	std::cout			<< ANSI_GRE << "[WrongAnimal] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	this->type			= _cpy.type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout			<< ANSI_GRE << "[WrongAnimal] "
						<< ANSI_RES << "Default destructor" << std::endl;
}

WrongAnimal&			WrongAnimal::operator=(const WrongAnimal& _cpy)
{
	std::cout			<< ANSI_GRE << "[WrongAnimal] "
						<< ANSI_RES << "= assignment" << std::endl;
	this->type			= _cpy.type;
	return				*this;
}

std::string				WrongAnimal::getType(void) const
{
	return				this->type;
}

void					WrongAnimal::makeSound(void) const
{
	std::cout			<< ANSI_GRE << "[WrongAnimal] "
						<< ANSI_RES << "He just says "
						<< ANSI_YEL << "\"WrongAnimal\""
						<< ANSI_RES << "... Isn't it weird?" << std::endl;
}