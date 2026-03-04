/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:39:18 by strieste          #+#    #+#             */
/*   Updated: 2026/03/04 17:55:42 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <sys/stat.h>

static int	empty_replace(std::string nameFile);

int	main(int ac, char **av)
{
	struct stat buff;
	std::string	fileName;
	std::string	str;
	std::string	find;
	std::string	replace;
	std::string::size_type	n;

	if (ac != 4)
		return (std::cerr << "Error input no equal to 3: File name, s1 and s2" << std::endl, 1);
	if (ac == 4 && replace.compare(find))
		return (empty_replace(fileName));
	if (stat(av[1], &buff) == 0 && S_ISDIR(buff.st_mode))
		return (std::cerr << av[1] << " is a directory" << std::endl, 1);
	fileName = av[1];
	std::ifstream fd(av[1], std::ios::in);
	if (!fd.is_open())
		return (std::cerr << "Error open file: " << av[1] << std::endl, 1);
	fileName.append(".replace");
	find = av[2];
	replace = av[3];
	std::ofstream newFd(fileName.c_str());
	if (!newFd.is_open())
	{
		std::cerr << "Error open file: " << fileName << std::endl;
		fd.close();
		return (1);
	}
	while (!fd.eof())
	{
		std::getline(fd, str);
		n = str.find(find);
		while (n != std::string::npos)
		{
			str.erase(n, find.length());
			str.insert(n, replace);
			n = str.find(find, n + replace.length());
		}
		newFd << str << '\n';
	}
	fd.close();
	newFd.close();
	return (0);
}

static int	empty_replace(std::string nameFile)
{
	std::string	buff;
	std::string newName;

	std::ifstream fd(nameFile.c_str(), std::ios::in);
	if (!fd.is_open())
	{
		std::cerr << "Error open file: " << nameFile << std::endl;
		return (1);
	}
	newName + ".replace";
	std::ofstream newFd(newName.c_str());
	if (!newFd.is_open())
	{
		std::cerr << "Error open file: " << newName << std::endl;
		fd.close();
		return (1);
	}
	while (!fd.eof())
	{
		getline(fd, buff);
		newFd << buff << '\n';
	}
	fd.close();
	newFd.close();
	return (0);
}