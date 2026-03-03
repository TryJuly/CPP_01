/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:39:18 by strieste          #+#    #+#             */
/*   Updated: 2026/03/03 15:41:12 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

int	main(int ac, char **av)
{
	struct stat buff;
	std::string	fileName;
	std::string	str;

	if (ac != 4)
	{
		std::cout << "Error input less than 3" << std::endl;
		return (1);
	}
	if (stat(av[1], &buff) == 0 && S_ISDIR(buff.st_mode))
	{
		std::cout << av[1] << " is a directory" << std::endl;
		return (1);
	}
	fileName = av[1];
	std::ifstream fd(av[1], std::ios::in);
	if (!fd.is_open())
	{
		std::cerr << "Error open file: " << av[1] << std::endl;
		return (1);
	}
	fileName.append(".replace");
	std::ofstream newFd(fileName.c_str());
	if (!newFd.is_open())
	{
		std::cerr << "Error open file: " << fileName << std::endl;
		fd.close();
		return (1);
	}
	// newFd << "Hello";
	std::getline(fd, str);
	while (!str.empty())
	{
		
	}
	
	// file.close();
	return (0);
}
