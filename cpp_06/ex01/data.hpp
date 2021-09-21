/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:27:04 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 17:16:34 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					DATA_HPP
# define					DATA_HPP

# include					<iostream>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

class						Data
{
	private:
		std::string			_st1;
		std::string			_st2;
		int					_num;

	public:
		Data(void);
		Data(std::string _st1, std::string _st2, int _num);
		Data(const Data& _cpy);
		~Data(void);
		Data&				operator=(const Data& _cpy);

		std::string			getArg_st1(void) const;
		std::string			getArg_st2(void) const;
		int					getArg_num(void) const;
};

uintptr_t					serialize(Data *_ptr);
Data*						deserialize(uintptr_t _raw);

# endif