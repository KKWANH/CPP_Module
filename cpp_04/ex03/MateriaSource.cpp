/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 07:28:57 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:39 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout				<< ANSI_GRE << "[MateriaSource] "
							<< ANSI_RES << "Default constructor"
							<< ANSI_RES << std::endl;
	for (int _idx = 0; _idx < 4; _idx++)
		this->_mat[_idx] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& _cpy)
{
	std::cout				<< ANSI_GRE << "[MateriaSource] "
							<< ANSI_RES << "Copy constructor"
							<< ANSI_RES << std::endl;
	for (int _idx = 0; _idx < 4; _idx++)
		this->_mat[_idx] = _cpy._mat[_idx]->clone();
}

MateriaSource&				MateriaSource::operator=(const MateriaSource& _cpy)
{
	std::cout				<< ANSI_GRE << "[MateriaSource] "
							<< ANSI_RES << "= Assignment"
							<< ANSI_RES << std::endl;
	if (this != &_cpy)
	{
		MateriaSource::~MateriaSource();
		for (int _idx = 0; _idx < 4; _idx++)
			this->_mat[_idx] = _cpy._mat[_idx]->clone();
	}
	return					*this;
}

MateriaSource::~MateriaSource(void)
{
	std::cout				<< ANSI_GRE << "[MateriaSource] "
							<< ANSI_RES << "Default destructor"
							<< ANSI_RES << std::endl;
	for (int _idx = 0; _idx < 4; _idx++)
		if (this->_mat[_idx] != NULL)
			delete			this->_mat[_idx];
}

void						MateriaSource::learnMateria(AMateria* _mat)
{
	for (int _idx = 0; _idx < 4; _idx++)
		if (this->_mat[_idx] == NULL)
		{
			this->_mat[_idx] = _mat;
			break ;
		}
}

AMateria*					MateriaSource::createMateria(const std::string& _typ)
{
	if (_typ != "ice" && _typ != "cure")
		return				0;
	for (int _idx = 0; _idx < 4; _idx++)
		if (this->_mat[_idx] && !this->_mat[_idx]->getType().compare(_typ))
			return			this->_mat[_idx]->clone();
	return					0;
}