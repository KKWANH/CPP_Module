/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:26:08 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:04 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				ANIMAL_HPP
# define				ANIMAL_HPP

# include				<iostream>

# define				ANSI_RES	"\e[0;0m"
# define				ANSI_BOL	"\e[0;1m"
# define				ANSI_ITA	"\e[0;3m"
# define				ANSI_RED	"\e[0;31m"
# define				ANSI_GRE	"\e[0;32m"
# define				ANSI_YEL	"\e[0;33m"
# define				ANSI_BLU	"\e[0;34m"
# define				ANSI_MAG	"\e[0;35m"
# define				ANSI_CYA	"\e[0;36m"

class Animal
{
	protected:
		std::string		type;

	public:
		Animal(void);
		Animal(const Animal& _cpy);
		virtual			~Animal(void);
		Animal&			operator=(const Animal& _cpy);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

# endif