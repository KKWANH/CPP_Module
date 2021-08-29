/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/28 17:11:55 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"Cat.hpp"

Cat::Cat(void)
{
	std::cout			<< ANSI_GRE << "[Cat] "
						<< ANSI_RES << "Default constructor" << std::endl;
	this->type			= "Cat";
	this->brain			= new Brain();
}

Cat::Cat(const Cat& _cpy)
{
	std::cout			<< ANSI_GRE << "[Cat] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	this->type			= _cpy.type;
	delete				this->brain;
	this->brain			= new Brain(*_cpy.brain);
}

Cat::~Cat(void)
{
	std::cout			<< ANSI_GRE << "[Cat] "
						<< ANSI_RES << "Default destructor" << std::endl;
	delete				this->brain;
}

Cat&					Cat::operator=(const Cat& _cpy)
{
	std::cout			<< ANSI_GRE << "[Cat] "
						<< ANSI_RES << "= assignment" << std::endl;
	this->type			= _cpy.type;
	delete				this->brain;
	this->brain			= new Brain(*_cpy.brain);
	return				*this;
}

std::string				Cat::getType(void) const
{
	return				this->type;
}

void					Cat::makeSound(void) const
{
	std::cout			<< ANSI_GRE << "[Cat] "
						<< ANSI_RES << "This creature is "
						<< ANSI_YEL << "THE MOST CUTE ONE IN THE WORLD"
						<< ANSI_RES << "... haha." << std::endl;
}

Brain*					Cat::getBrain(void) const
{
	return				this->brain;
}