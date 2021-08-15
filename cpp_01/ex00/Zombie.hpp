# ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP

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

class				Zombie
{
	public:
		Zombie(std::string _nam);
		~Zombie(void);
		void		announce(void);
	
	private:
		std::string	name;
};

void			randomChump(std::string _nam);
Zombie			*newZombie(std::string _nam);

# endif