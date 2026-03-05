/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:39:26 by strieste          #+#    #+#             */
/*   Updated: 2026/03/05 09:31:42 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Missing argument choose one of them:" << std::endl;
		std::cout << "Level 1 : DEBUG" << std::endl;
		std::cout << "Level 2 : INFO" << std::endl;
		std::cout << "Level 3 : WARNING" << std::endl;
		std::cout << "Level 4 : ERROR" << std::endl;
		return (1);
	}
	Harl	*harlouch = new Harl;
	harlouch->complain(av[1]);
	delete harlouch;
	return (0);
}
