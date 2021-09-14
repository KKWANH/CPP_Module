/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:07 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"Dog.hpp"

Dog::Dog(void)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Default constructor" << std::endl;
	this->type			= "Dog";
	this->brain			= new Brain();
}

Dog::Dog(const Dog& _cpy)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	this->type			= _cpy.type;
	delete				this->brain;
	this->brain			= new Brain(*_cpy.brain);
}

Dog::~Dog(void)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "Default destructor" << std::endl;
	delete				this->brain;
}

Dog&					Dog::operator=(const Dog& _cpy)
{
	std::cout			<< ANSI_GRE << "[Dog] "
						<< ANSI_RES << "= assignment" << std::endl;
	this->type			= _cpy.type;
	delete				this->brain;
	this->brain			= new Brain(*_cpy.brain);
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

Brain*					Dog::getBrain(void) const
{
	return				this->brain;
}