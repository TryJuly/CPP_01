/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:54:52 by strieste          #+#    #+#             */
/*   Updated: 2026/03/02 14:18:10 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	annouceZombie(Zombie *horde, int N);

int	main(int ac, char **av)
{
	Zombie*	horde;
	
	if (ac > 3)
		return (1);
	if (ac == 3)
	{
		int	N = atoi(av[1]);
		horde = zombieHorde(N, av[2]);
		annouceZombie(horde, N);
	}
	else
	{
		horde = zombieHorde(5, "Luc");
		annouceZombie(horde, 5);
	}
	delete[] horde;
	return (0);
}

static void	annouceZombie(Zombie *horde, int N)
{
	for (int i = 0; i < N; i++)
		horde[i].announce();
}