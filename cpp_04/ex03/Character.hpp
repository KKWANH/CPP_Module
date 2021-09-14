/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:33 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					CHARACTER_HPP
# define					CHARACTER_HPP

# include					"AMateria.hpp"

class						Character : public ICharacter
{
	private:
		std::string			_nam;
		AMateria*			_mat[4];
		Character(void)		{}

	public:
		Character(const std::string& _nam);
		Character(const Character& _cpy);
		Character&			operator=(const Character& _cpy);
		virtual				~Character(void);
		const std::string&	getName(void) const;
		void				equip(AMateria* _mat);
		void				unequip(int _idx);
		void				use(int _idx, ICharacter& _tgt);
};

# endif