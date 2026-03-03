/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:10:25 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 11:39:38 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		
		void	attack(void);
		void	setWeapon(Weapon &newWeapon);
		
		private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif