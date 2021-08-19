/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:47:36 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:01:04 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				FRAGTRAP_HPP
# define				FRAGTRAP_HPP

# include				<iostream>
# include				"ClapTrap.hpp"

class					FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string _nam);
		FragTrap(const FragTrap& _cpy);
		~FragTrap(void);
		FragTrap&		operator=(const FragTrap &_cpy);
		void			highFivesGuys(void);

};

# endif