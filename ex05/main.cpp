/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:39:26 by strieste          #+#    #+#             */
/*   Updated: 2026/03/04 13:32:48 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	newHarl;

	newHarl.complain("error");
	newHarl.complain("infos");
	newHarl.complain("warning");
	newHarl.complain("debug");
	return (0);
}