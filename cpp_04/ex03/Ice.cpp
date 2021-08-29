/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:19:18 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 15:07:48 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Ice.hpp"

Ice::Ice(void)
:	AMateria("ice")
{
	std::cout				<< ANSI_GRE << "[Ice] "
							<< ANSI_RES << "Default constructor"
							<< ANSI_RES << std::endl;
}

Ice::Ice(const Ice& _cpy)
:	AMateria(_cpy)
{
	std::cout				<< ANSI_GRE << "[Ice] "
							<< ANSI_RES << "Copy constructor"
							<< ANSI_RES << std::endl;
}

Ice&						Ice::operator=(const Ice& _cpy)
{
	std::cout				<< ANSI_GRE << "[Ice] "
							<< ANSI_RES << "= Assignment"
							<< ANSI_RES << std::endl;
	if (this != &_cpy)
		AMateria::operator=(_cpy);
	return					*this;
}

AMateria*					Ice::clone(void) const
{
	return					new Ice();
}

void						Ice::use(ICharacter& _tgt)
{
	std::cout				<< std::endl
							<< ANSI_GRE << "[Ice] "
							<< ANSI_RES << "* "
							<< ANSI_ITA << "shoots an ice bolt at "
							<< ANSI_YEL << _tgt.getName()
							<< ANSI_RES << ANSI_ITA << " *"
							<< ANSI_RES << std::endl << std::endl;
}