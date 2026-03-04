/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:39:26 by strieste          #+#    #+#             */
/*   Updated: 2026/03/04 19:09:14 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	*harlouch = new Harl;
	
	std::cout << "Debug :" << std::endl;
	harlouch->complain("debug");
	std::cout << std::endl;
	std::cout << "Warning :" << std::endl;
	harlouch->complain("warning");
	std::cout << std::endl;
	std::cout << "Info :" << std::endl;
	harlouch->complain("info");
	std::cout << std::endl;
	std::cout << "Error :" << std::endl;
	harlouch->complain("error");
	
	delete harlouch;
	return (0);
}
