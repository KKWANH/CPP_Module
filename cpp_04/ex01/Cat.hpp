/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:26:08 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:06 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				CAT_HPP
# define				CAT_HPP

# include				<iostream>
# include				"Animal.hpp"
# include				"Brain.hpp"

# define				ANSI_RES	"\e[0;0m"
# define				ANSI_BOL	"\e[0;1m"
# define				ANSI_ITA	"\e[0;3m"
# define				ANSI_RED	"\e[0;31m"
# define				ANSI_GRE	"\e[0;32m"
# define				ANSI_YEL	"\e[0;33m"
# define				ANSI_BLU	"\e[0;34m"
# define				ANSI_MAG	"\e[0;35m"
# define				ANSI_CYA	"\e[0;36m"

class Cat : public Animal
{
	private:
		Brain			*brain;

	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& _cpy);
		Cat&			operator=(const Cat& _cpy);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		Brain*			getBrain(void) const;
};

# endif