/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:19:49 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"Dog.hpp"

Dog::Dog(void)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Default constructor" << std::endl;
	this->type			= "Dog";
}

Dog::Dog(const Dog& _cpy)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	this->type			= _cpy.type;
}

Dog::~Dog(void)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Default destructor" << std::endl;
}

Dog&					Dog::operator=(const Dog& _cpy)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "= assignment" << std::endl;
	this->type			= _cpy.type;
	return				*this;
}

std::string				Dog::getType(void) const
{
	return				this->type;
}

void					Dog::makeSound(void) const
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Yea, of course it's cute,  "
						<< ANSI_YEL << "BUT I PREFER CAT RATHER THAN DOG"
						<< ANSI_RES << "... haha." << std::endl;
}