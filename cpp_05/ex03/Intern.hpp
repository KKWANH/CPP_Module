/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 06:12:37 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/09 06:21:06 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					INTERN_HPP
# define					INTERN_HPP

# include					<iostream>
# include					"Form.hpp"
# include					"ShrubberyCreationForm.hpp"
# include					"RobotomyRequestForm.hpp"
# include					"PresidentialPardonForm.hpp"

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

class						Intern
{
	private:
		typedef				Form *(Intern::*f)(const std::string &);
		struct				formType_
		{
			const std::string
							_nam;
			const f			_fnc;
		};
		Form*				makeShrubberyCreationForm_(const std::string & _tgt);
		Form*				makeRobotomyRequestForm_(const std::string & _tgt);
		Form*				makePresidentialPardonForm_(const std::string & _tgt);
	
	public:
		Intern(void);
		Intern(const Intern& _cpy);
		~Intern(void);
		Intern&				operator=(const Intern& _cpy);

		Form*				makeForm(std::string _nam, std::string _tgt);
		static const formType_
							_lst[];
		
};

# endif