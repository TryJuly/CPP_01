/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:56:58 by strieste          #+#    #+#             */
/*   Updated: 2026/03/02 12:47:59 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif