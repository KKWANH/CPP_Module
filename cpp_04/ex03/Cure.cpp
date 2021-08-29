/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:19:18 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 06:04:15 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Cure.hpp"

Cure::Cure(void)
:	AMateria("cure")
{
	std::cout				<< ANSI_GRE << "[Cure] "
							<< ANSI_RES << "Default constructor"
							<< ANSI_RES << std::endl;
}

Cure::Cure(const Cure& _cpy)
:	AMateria(_cpy)
{
	std::cout				<< ANSI_GRE << "[Cure] "
							<< ANSI_RES << "Copy constructor"
							<< ANSI_RES << std::endl;
}

Cure&						Cure::operator=(const Cure& _cpy)
{
	std::cout				<< ANSI_GRE << "[Cure] "
							<< ANSI_RES << "= Assignment"
							<< ANSI_RES << std::endl;
	if (this != &_cpy)
		AMateria::operator=(_cpy);
	return					*this;
}

AMateria*					Cure::clone(void) const
{
	return					new Cure();
}

void						Cure::use(ICharacter& _tgt)
{
	std::cout				<< std::endl
							<< ANSI_GRE << "[Cure] "
							<< ANSI_RES << "* "
							<< ANSI_ITA << "heals "
							<< ANSI_YEL << _tgt.getName()
							<< ANSI_RES << ANSI_ITA << "'s wounds *"
							<< ANSI_RES << std::endl << std::endl;
}