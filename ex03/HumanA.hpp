/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:28:57 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 12:34:24 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA();
		void	attack(void);

	private:
		Weapon		&_weapon;
		std::string	_name;
};

#endif