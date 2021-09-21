/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:48:21 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:42:10 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					ROBOTOMYREQUESTFORM_HPP
# define					ROBOTOMYREQUESTFORM_HPP

# include					<random>
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

class						RobotomyRequestForm : public Form
{
	private:
		std::string			_tgt;
	
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string _tgt);
		RobotomyRequestForm(const RobotomyRequestForm& _cpy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm&
							operator=(const RobotomyRequestForm& _cpy);

		virtual bool		execute(const Bureaucrat& _exe) const;
};

# endif 