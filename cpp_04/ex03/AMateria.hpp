/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:43:39 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 07:44:27 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					AMATERIA_HPP
# define					AMATERIA_HPP

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

# include					<iostream>
# include					"ICharacter.hpp"

class						AMateria
{
	protected:
		std::string			_typ;

	public:
		AMateria(void);
		AMateria(const std::string& _typ);
		AMateria(const AMateria& _cpy);
		AMateria&			operator=(const AMateria& _cpy);
		virtual				~AMateria(void);

		const std::string&	getType(void) const;
		virtual	AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter&);
};

# endif