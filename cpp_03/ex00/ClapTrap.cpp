/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:08:50 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/17 12:08:30 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include				"ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout			<< ANSI_GRE << "[ClapTrap] " << ANSI_RES
						<< "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string _nam)
{
	this->name			= _nam;
	this->HitPoint		= 10;
	this->EnergyPoint	= 10;
	this->AttackDamage	= 0;

	std::cout			<< ANSI_GRE << "[ClapTrap] " << ANSI_RES
						<< "Default constructor with parameter" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& _cpy)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[ClapTrap] " << ANSI_RES
						<< "Copy constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout			<< ANSI_GRE << "[ClapTrap] " << ANSI_RES
						<< "Destructor" << std::endl;
}

ClapTrap&				ClapTrap::operator=(const ClapTrap& _cpy)
{
	this->name			= _cpy.name;
	this->HitPoint		= _cpy.HitPoint;
	this->EnergyPoint	= _cpy.EnergyPoint;
	this->AttackDamage	= _cpy.AttackDamage;

	std::cout			<< ANSI_GRE << "[ClapTrap] " << ANSI_RES
						<< "Copy operator" << std::endl;

	return				*this;
}

void					ClapTrap::attack(const std::string& _tgt)
{
	std::cout			<< ANSI_GRE << "[ClapTrap] "
						<< ANSI_YEL	<< "[" << this->name << "]"
						<< ANSI_RES << " attacks "
						<< ANSI_YEL	<< "[" << _tgt << "]"
						<< ANSI_RES << ", causing "
						<< ANSI_RED << "{" << this->AttackDamage << "}"
						<< ANSI_RES << " points!" << std::endl;
}

void					ClapTrap::takeDamage(unsigned int _amt)
{
	int					_dmg;

	if (this->HitPoint <= 0)
	{
		std::cout		<< ANSI_GRE << "[ClapTrap] "
						<< ANSI_YEL	<< "[" << this->name << "]"
						<< ANSI_RES << "is already "
						<< ANSI_RED << "dead."
						<< ANSI_RES << std::endl;
		return ;
	}
	if (this->HitPoint < _amt)
		_dmg = this->HitPoint;
	else
		_dmg = _amt;
	this->HitPoint -= _dmg;
	std::cout			<< ANSI_GRE << "[ClapTrap] "
						<< ANSI_YEL << "[" << this->name << "]"
						<< ANSI_RES << " is attacked! "
						<< ANSI_RED << "{" << _dmg << "}"
						<< ANSI_RES << " points!" << std::endl;
}

void					ClapTrap::beRepaired(unsigned int _amt)
{
	this->HitPoint		+= _amt;
	std::cout			<< ANSI_GRE << "[ClapTrap] "
						<< ANSI_YEL << "[" << this->name << "]"
						<< ANSI_RES << " has been recovered by "
						<< ANSI_GRE << "{" << _amt << "}"
						<< ANSI_RES << " points!" << std::endl;
}