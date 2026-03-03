/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 08:37:39 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 11:16:44 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		const std::string&	getType(void);
		void				setType(std::string newType);

	private:
		std::string	_type;
};

#endif