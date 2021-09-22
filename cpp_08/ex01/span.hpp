/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:04:40 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 01:25:00 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					SPAN_HPP
# define					SPAN_HPP

# include					<iostream>
# include					<exception>
# include					<vector>

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

class						MemoryException : public std::exception
{
	public:
		virtual const char*	what() const throw()
			{
				std::string	_str =
							ANSI_RED "[EXCEPTION] "
							ANSI_RES "[Array Overflow] ";
				const char*	_rst = _str.c_str();
				return		_rst;
			}
};

class						ArrayLackException : public std::exception
{
	public:
		virtual const char*	what() const throw()
			{
				std::string	_str =
							ANSI_RED "[EXCEPTION] "
							ANSI_RES "[Array's elements count is less than two] ";
				const char*	_rst = _str.c_str();
				return		_rst;
			}
};

class						Span
{
	private:
		std::vector<int>	_arr;
		int					_len;
		int					_cnt;
	
	public:
		Span(void);
		Span(unsigned int _cnt);
		Span(const Span& _cpy);
		~Span(void);
		Span&				operator=(const Span& _cpy);

		void				addNumber(int _num);
		void				addNumber(unsigned int _nm1, unsigned int _nm2);
		void				sort(void);
		int					shortestSpan(void);
		int					longestSpan(void);
		std::vector<int>	getArr(void);
};

# endif