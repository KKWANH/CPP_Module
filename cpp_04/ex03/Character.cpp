/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 07:09:51 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:33 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Character.hpp"

Character::Character(const std::string& _nam)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_RES << "Default constructor"
							<< ANSI_RES << std::endl;
	this->_nam = _nam;
	for (int _idx = 0; _idx < 4; _idx++)
		this->_mat[_idx] = NULL;
}

Character::Character(const Character& _cpy)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_RES << "Copy constructor"
							<< ANSI_RES << std::endl;
	this->_nam = _cpy._nam;
	for (int _idx = 0; _idx < 4; _idx++)
		this->_mat[_idx] = _cpy._mat[_idx]->clone();
}

Character::~Character(void)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_RES << "Default destructor"
							<< ANSI_RES << std::endl;
	for (int _idx = 0; _idx < 4; _idx++)
		if (this->_mat[_idx] != NULL)
			delete			this->_mat[_idx];
}

Character&					Character::operator=(const Character& _cpy)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_RES << "= Assignment"
							<< ANSI_RES << std::endl;
	if (this != &_cpy)
	{
		Character::~Character();
		this->_nam = _cpy._nam;
		for (int _idx = 0; _idx < 4; _idx++)
			this->_mat[_idx] = _cpy._mat[_idx]->clone();	
	}
	return					*this;
}

const std::string&			Character::getName(void) const
{
	return					this->_nam;
}

void						Character::equip(AMateria* _mat)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_YEL << "EQUIP "
							<< ANSI_RES << "function."
							<< ANSI_RES << std::endl;
	for (int _idx = 0; _idx < 4; _idx++)
		if (this->_mat[_idx] == NULL)
		{
			this->_mat[_idx] = _mat;
			break ;
		}
}

void						Character::unequip(int _idx)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_YEL << "UNEQUIP "
							<< ANSI_RES << "function."
							<< ANSI_RES << std::endl;
	if (_idx >= 0 && _idx <= 3)
		this->_mat[_idx] = NULL;
}

void						Character::use(int _idx, ICharacter& _tgt)
{
	std::cout				<< ANSI_GRE << "[Character] "
							<< ANSI_YEL << "USE "
							<< ANSI_RES << "function."
							<< ANSI_RES << std::endl;
	if (_idx >= 0 && _idx <= 3 && this->_mat[_idx] != NULL)
		this->_mat[_idx]->use(_tgt);
}