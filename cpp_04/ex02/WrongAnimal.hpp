/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:26:08 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:00 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				WRONGANIMAL_HPP
# define				WRONGANIMAL_HPP

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

class WrongAnimal
{
	protected:
		std::string		type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& _cpy);
		virtual			~WrongAnimal(void);
		WrongAnimal&	operator=(const WrongAnimal& _cpy);

		std::string		getType(void) const;
		virtual	void	makeSound(void) const;
};

# endif