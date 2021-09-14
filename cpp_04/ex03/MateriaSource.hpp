/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:41 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					MATERIASOURCE_HPP
# define					MATERIASOURCE_HPP

# include					"IMateriaSource.hpp"


class						MateriaSource : public IMateriaSource
{
	private:
		AMateria*			_mat[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& _cpy);
		MateriaSource&		operator=(const MateriaSource& _cpy);
		virtual				~MateriaSource(void);
		void				learnMateria(AMateria*);
		AMateria*			createMateria(const std::string& _typ);
};

# endif