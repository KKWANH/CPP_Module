/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:48:21 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/09 04:47:14 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					FORM_HPP
# define					FORM_HPP

# include					<iostream>

class						Form;

# include					"Bureaucrat.hpp"

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

class						Bureaucrat;

class						Form
{
	private:
		const std::string	_nam;
		bool				_chk;
		const int			_sgn;
		const int			_exe;
	
	public:
		Form(void);
		Form(std::string _nam, int _sgn, int _exe);
		Form(const Form& _cpy);
		~Form(void);
		Form&				operator=(const Form& _cpy);

		const std::string	getName(void) const ;
		int					getSignGrade(void) const;
		int					getExecuteGrade(void) const;
		bool				getIsSigned(void) const;
		void				beSigned(Bureaucrat& _bur);
		
		virtual bool		execute(const Bureaucrat& _bur) const = 0;
		
		class				GradeTooHighException : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};
		class				GradeTooLowException  : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};
		class				NotSignedException  : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};
};

std::ostream&				operator<<(std::ostream &_out, const Form& _cpy);

# endif