/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:40:15 by strieste          #+#    #+#             */
/*   Updated: 2026/03/04 19:08:09 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor Harl class called" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Destructor Harl class called" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger! "
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I\\’ve been coming foryears, whereas you started working here just last month." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	void	(Harl:: *nameTab[4]) (void);
	std::array<std::string, 4> tab;

	nameTab[0] = &Harl::debug;
	nameTab[1] = &Harl::info;
	nameTab[2] = &Harl::warning;
	nameTab[3] = &Harl::error;
	
	tab[0] = "debug";
	tab[1] = "info";
	tab[2] = "warning";
	tab[3] = "error";
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(tab[i]) == 0)
		{
			(this->*nameTab[i])();
			return ;
		}
	}
}
