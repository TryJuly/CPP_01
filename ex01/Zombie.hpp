/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:55:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/02 14:27:59 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	nameIt(std::string name);
		void	announce(void);
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif