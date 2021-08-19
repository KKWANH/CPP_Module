/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:08:50 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:01:06 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout			<< ANSI_GRE << "[FragTrap] " << ANSI_RES
						<< "Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string _nam)
{
	this->name			= _nam;
	this->HitPoint		= 10;
	this->EnergyPoint	= 10;
	this->AttackDamage	= 0;

	std::cout			<< ANSI_GRE << "[FragTrap] " << ANSI_RES
						<< "Default constructor with parameter" << std::endl;
}

FragTrap::FragTrap(const FragTrap& _cpy)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[FragTrap] " << ANSI_RES
						<< "Copy constructor" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout			<< ANSI_GRE << "[FragTrap] " << ANSI_RES
						<< "Destructor" << std::endl;
}

FragTrap&				FragTrap::operator=(const FragTrap& _cpy)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[FragTrap] " << ANSI_RES
						<< "Copy operator" << std::endl;

	return				*this;
}

void					FragTrap::highFivesGuys(void)
{
	std::cout			<< ANSI_GRE << "[FragTrap] " << ANSI_RES
						<< "✋✋✋✋" << std::endl;
}