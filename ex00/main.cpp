/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:56:37 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 11:12:42 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	Zombie	*ptr;
	
	ptr = newZombie("Pedro");
	ptr->announce();
	std::cout << std::endl;
	randomChump("Bernard");
	std::cout << std::endl;
	Zombie("Louis").announce();
	std::cout << std::endl;
	Zombie("Bertrand").announce();
	std::cout << std::endl;
	ptr->announce();
	delete(ptr);
	return (0);
}