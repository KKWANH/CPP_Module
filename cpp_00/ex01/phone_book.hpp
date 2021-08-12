# ifndef	PHONE_BOOK_H
# define	PHONE_BOOK_H

# include	<string>
# include	<iostream>

# define	ANSI_RES	"\e[0;0m"
# define	ANSI_BOL	"\e[0;1m"
# define	ANSI_ITA	"\e[0;3m"
# define	ANSI_RED	"\e[0;31m"
# define	ANSI_GRE	"\e[0;32m"
# define	ANSI_YEL	"\e[0;33m"
# define	ANSI_BLU	"\e[0;34m"
# define	ANSI_MAG	"\e[0;35m"
# define	ANSI_CYA	"\e[0;36m"

class				contact
{
	public:
		void		fill();
		int			is_exist();
		void		clear();
		void		display(int _idx);
		void		display_template(std::string _str);
	
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		std::string	underwareColor;
};

# endif