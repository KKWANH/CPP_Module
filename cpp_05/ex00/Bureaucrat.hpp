/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:48:21 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/03 20:29:18 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					BUREAUCRAT_HPP
# define					BUREAUCRAT_HPP

# include					<iostream>
# include					<exception>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

class						Bureaucrat
{
	private:
		const std::string	_nam;
		int					_grd;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string _nam, int _grd);
		Bureaucrat(const Bureaucrat& _cpy);
		~Bureaucrat(void);
		Bureaucrat&			operator=(const Bureaucrat& _cpy);

		void				increaseGrade(void);
		void				decreaseGrade(void);
		std::string			getName(void) const;
		int					getGrade(void) const;
		
		class				GradeTooHighException : public std::exception
		{
			public:
				virtual const char*
							what() const throw();
		};
		class				GradeTooLowException  : public std::exception
		{
			public:
				virtual const char*
							what() const throw();
		};
};

std::ostream&				operator<<(std::ostream &_out, const Bureaucrat& _cpy);

# endif