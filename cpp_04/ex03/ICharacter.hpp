/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:36 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					ICHARACTER_HPP
# define					ICHARACTER_HPP

# include					<iostream>

class						AMateria;

class						ICharacter
{
	public:
		virtual				~ICharacter(void) {}
		virtual void		equip(AMateria* _amt) = 0;
		virtual void		unequip(int _idx) = 0;
		virtual void		use(int _idx, ICharacter& _tgt)= 0;
		virtual	std::string const&
							getName(void) const = 0;
};

# endif