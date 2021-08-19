/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:54:11 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 00:59:49 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef			FIXED_HPP
# define			FIXED_HPP

# include			<iostream>

# define			ANSI_RES	"\e[0;0m"
# define			ANSI_BOL	"\e[0;1m"
# define			ANSI_ITA	"\e[0;3m"
# define			ANSI_RED	"\e[0;31m"
# define			ANSI_GRE	"\e[0;32m"
# define			ANSI_YEL	"\e[0;33m"
# define			ANSI_BLU	"\e[0;34m"
# define			ANSI_MAG	"\e[0;35m"
# define			ANSI_CYA	"\e[0;36m"

class				Fixed
{
	private:
		int			_val;
		static const int
					_bit = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &_fix);
		~Fixed(void);
		Fixed&		operator=(Fixed const &_fix);
		int			getRawBits(void) const;
		void		setRawBits(int const _raw);
		
};


# endif