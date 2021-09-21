/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:27:04 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 17:16:31 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					SCALA_HPP
# define					SCALA_HPP

# include					<iostream>
# include					<string>
# include					<cmath>
# include					<sstream>
# include					<iomanip>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

class						Scalar
{
	private:
		std::string			_str;

	public:
		Scalar(void);
		Scalar(const std::string& _arg);
		Scalar(const Scalar& _cpy);
		~Scalar(void);
		Scalar&				operator=(const Scalar& _cpy);

		operator			char(void) const;
		operator			int(void) const;
		operator			double(void) const;
		operator			float(void) const;

		class				ImpossibleException : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};

		class				NonDisplayableException : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};

		void				PrintInt(void);
		void				PrintChar(void);
		void				PrintFloat(void);
		void				PrintDouble(void);
};

# endif