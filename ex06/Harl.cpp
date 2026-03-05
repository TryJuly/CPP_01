/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:40:15 by strieste          #+#    #+#             */
/*   Updated: 2026/03/05 09:36:39 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor Harl class called" << std::endl;
	nameTab[0] = &Harl::debug;
	nameTab[1] = &Harl::info;
	nameTab[2] = &Harl::warning;
	nameTab[3] = &Harl::error;
	tab[0] = "DEBUG";
	tab[1] = "INFO";
	tab[2] = "WARNING";
	tab[3] = "ERROR";
	return ;
}

Harl::~Harl()
{
	std::cout << "Destructor Harl class called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming foryears, whereas you started working here just last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}



void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(tab[i]) == 0)
		{
			switch (i)
			{
				case 0:
					(this->*nameTab[0])();
				case 1:
					(this->*nameTab[1])();
				case 2:
					(this->*nameTab[2])();
				case 3:
					(this->*nameTab[3])();
					return ;
				default:
					std::cout << "Nothing to say" << std::endl;
					return ;
			}
		}
	}
	std::cout << "Nothing to say" << std::endl;
	return ;
}
