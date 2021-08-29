/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 07:08:34 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					ICE_HPP
# define					ICE_HPP

# include					"AMateria.hpp"

class						Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& _cpy);
		Ice&				operator=(const Ice& _cpy);
		virtual				~Ice(void) {}
		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& _tgt);
};

# endif