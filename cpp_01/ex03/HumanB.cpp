/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:15:36 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 13:02:30 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"HumanB.hpp"

HumanB::HumanB(std::string _nam)
{
	this->name = _nam;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void			HumanB::attack(void)
{
	std::cout	<< ANSI_YEL << "[" << this->name << "] "
				<< ANSI_RES << "attacks with his "
				<< ANSI_CYA << this->weapon->getType()
				<< std::endl;
}

void			HumanB::setWeapon(Weapon &_wpn)
{
	this->weapon = &_wpn;
}