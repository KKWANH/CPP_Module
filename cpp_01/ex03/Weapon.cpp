/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:52:35 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:06:18 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string _typ)
{
	this->setType(_typ);
}

void			Weapon::setType(std::string _typ)
{
	this->type	= _typ;
}

const std::string
				Weapon::getType(void)
{
	return		this->type;
}