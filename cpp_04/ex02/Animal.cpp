/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:44:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:19:54 by kimkwanho        ###   ########.fr       */
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
