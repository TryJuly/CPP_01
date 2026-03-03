/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:20:31 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 12:35:49 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : _name("Bernard"), _weapon(NULL) {}

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB()
{
	std::cout << "Destructor HumanB called" << std::endl;
}

void	HumanB::attack(void)
{
	if (!this->_weapon)
		return ;
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
	return ;
}