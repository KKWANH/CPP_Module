/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:04:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:01:48 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout			<< ANSI_GRE << "[ScavTrap] " << ANSI_RES
						<< "Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string _nam)
:	ClapTrap(_nam)
{
	this->HitPoint		= 10;
	this->EnergyPoint	= 10;
	this->AttackDamage	= 0;

	std::cout			<< ANSI_GRE << "[ScavTrap] " << ANSI_RES
						<< "Default constructor with parameter" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& _cpy)
:ClapTrap(_cpy.name)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[ScavTrap] " << ANSI_RES
						<< "Copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout			<< ANSI_GRE << "[ScavTrap] " << ANSI_RES
						<< "Destructor" << std::endl;
}

ScavTrap&				ScavTrap::operator=(const ScavTrap& _cpy)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[ScavTrap] " << ANSI_RES
						<< "Copy operator" << std::endl;

	return				*this;
}

void					ScavTrap::GuardGate(void)
{
	std::cout			<< ANSI_GRE << "[ScavTrap] "
						<< ANSI_RES << "Changes mode to "
						<< ANSI_YEL << "[GuardGate]"
						<< ANSI_RES << std::endl;
}

void					ScavTrap::attack(const std::string& _tgt)
{
	std::cout			<< ANSI_GRE << "[ScavTrap] "
						<< ANSI_YEL	<< "[" << this->name << "]"
						<< ANSI_RES << " attacks "
						<< ANSI_YEL	<< "[" << _tgt << "]"
						<< ANSI_RES << ", causing "
						<< ANSI_RED << "{" << this->AttackDamage << "}"
						<< ANSI_RES << " points!" << std::endl;
}