/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 07:26:33 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					IMATERIASOURCE_HPP
# define					IMATERIASOURCE_HPP

# include					"AMateria.hpp"


class						IMateriaSource
{
	public:
		virtual				~IMateriaSource(void) {}
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(const std::string& _typ) = 0;
};

# endif