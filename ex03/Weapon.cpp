/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 08:37:36 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 12:36:06 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("empty") {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon()
{
	std::cout << "Destructor Weapon called" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return ;
}
