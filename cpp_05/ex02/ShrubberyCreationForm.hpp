/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:48:21 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/09 04:06:41 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					SHRUBBERYCREATIONFORM_HPP
# define					SHRUBBERYCREATIONFORM_HPP

# include					<fstream>
# include					"Form.hpp"

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

class						ShrubberyCreationForm : public Form
{
	private:
		std::string			_tgt;
	
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string _tgt);
		ShrubberyCreationForm(const ShrubberyCreationForm& _cpy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm&
							operator=(const ShrubberyCreationForm& _cpy);

		virtual bool		execute(const Bureaucrat& _exe) const;

		class				TargetFileOpenException : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};
		class				WriteException : public std::exception
		{
			public:
				virtual const char*
							what(void) const throw();
		};
};

# endif 