/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:58:47 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/18 19:11:58 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout			<< ANSI_GRE << "[DiamondTrap] " << ANSI_RES
						<< "Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _nam)
:	ClapTrap(_nam),
	FragTrap(_nam),
	ScavTrap(_nam)
{
	this->name			= _nam;
	this->HitPoint		= 10;
	this->EnergyPoint	= 10;
	this->AttackDamage	= 0;
	this->ClapTrap::name= _nam + "::_clapName";

	std::cout			<< ANSI_GRE << "[DiamondTrap] " << ANSI_RES
						<< "Default constructor with parameter" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& _cpy)
:	ClapTrap(_cpy.name)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[DiamondTrap] " << ANSI_RES
						<< "Copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout			<< ANSI_GRE << "[DiamondTrap] " << ANSI_RES
						<< "Destructor" << std::endl;
}

DiamondTrap&				DiamondTrap::operator=(const DiamondTrap& _cpy)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[DiamondTrap] " << ANSI_RES
						<< "Copy operator" << std::endl;

	return				*this;
}

void					DiamondTrap::attack(const std::string& _tgt)
{
	ScavTrap::attack(_tgt);
}

void					DiamondTrap::whoAmI(void)
{
	std::cout			<< ANSI_GRE << "[DiamondTrap] "
						<< ANSI_RES << "My name is "
						<< ANSI_YEL << "[" << this->name << "]"
						<< ANSI_RES << ". And ClapTrap name is "
						<< ANSI_YEL << "[" << this->ClapTrap::name << "]"
						<< ANSI_RES << "." << std::endl;
}