/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:50:49 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:06:55 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef			KAREN_HPP
# define			KAREN_HPP

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

class				Karen
{
	public:
		Karen(void);
		~Karen(void);
		void		complain(std::string _lvl);

	private:
		typedef void (Karen::* _fnc)();
		struct _typ
		{
			std::string const	_nam;
			_fnc const				_fun;
		};
		static const _typ _lst[];

		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

enum				e_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NORMAL
};

# endif