/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 05:21:58 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 05:40:36 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					MUTANTSTACK_HPP
# define					MUTANTSTACK_HPP

# include					<iostream>
# include					<stack>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_BLC	"\e[0;30m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"


template					<typename _typ>
class						MutantStack : public std::stack<_typ>
{
	public:
		typedef typename std::stack<_typ>::container_type::iterator
							iterator;
		MutantStack(void)
		:	std::stack<_typ>()
			{
			}
		MutantStack(const MutantStack& _cpy)
			{
				*this		= _cpy;
			}
		~MutantStack(void)
			{
			}
		MutantStack&		operator=(const MutantStack& _cpy)
			{
				std::stack<_typ>::operator=(_cpy);
				return		*this;
			}
		
		iterator			begin(void)
			{
				return		std::stack<_typ>::c.begin();
			}
		iterator			end(void)
			{
				return		std::stack<_typ>::c.end();
			}
};

# endif