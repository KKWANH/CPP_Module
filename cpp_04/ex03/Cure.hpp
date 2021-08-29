/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 07:05:00 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					CURE_HPP
# define					CURE_HPP

# include					"AMateria.hpp"

class						Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& _cpy);
		Cure&				operator=(const Cure& _cpy);
		virtual				~Cure(void) {}
		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& _tgt);
};

# endif