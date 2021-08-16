/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 09:25:03 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:05:39 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout	<< ANSI_YEL << "<" << "NO_NAME" << "> "
				<< ANSI_RES << "is Born!" << std::endl;
}


Zombie::Zombie(std::string _nam)
{
	this->name	= _nam;
	std::cout	<< ANSI_YEL << "<" << this->name << "> "
				<< ANSI_RES << "is Born!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout	<< ANSI_YEL << "<" << this->name << "> "
				<< ANSI_RES << "is Dead!" << std::endl;
}

void			Zombie::announce(void)
{
	std::cout	<< ANSI_YEL << "<" << this->name << "> "
				<< ANSI_RES << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void			Zombie::setName(std::string _nam)
{
	this->name	= _nam;
}