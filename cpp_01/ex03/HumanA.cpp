/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:15:36 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:05:59 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"HumanA.hpp"

HumanA::HumanA(std::string _nam, Weapon& _wpn)
{
	this->name = _nam;
	this->weapon = &_wpn;
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void			HumanA::attack(void)
{
	std::cout	<< ANSI_YEL << "[" << this->name << "] "
				<< ANSI_RES << "attacks with his "
				<< ANSI_CYA << this->weapon->getType()
				<< std::endl;
}

void			HumanA::setWeapon(Weapon &_wpn)
{
	this->weapon = &_wpn;
}
