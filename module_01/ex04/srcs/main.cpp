/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:54:02 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/04 10:39:00 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replaceLine( std::string &line, char *prev, char *post){
	size_t	pos;

	pos = line.find(prev);
	while (pos != std::string::npos){
		line.erase(pos, ((std::string)prev).size());
		line.insert(pos, post);
		pos = line.find(prev, pos + ((std::string)post).size());
	}
//	std::cout << "TEST:" << post << std::endl;
	
}

int	main(int argc, char **argv){

	if (argc < 4){
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open()){
		std::cout << "Error: Impossible to open the input file" << std::endl;
		return (1);
	}
	std::ofstream	ofs(((std::string)argv[1] + ".replace").c_str());
	if (!ofs.is_open()){
		std::cout << "Error: Could not open or create the output file" << std::endl;
		return (1);
	}

	std::string	line;
	while (std::getline(ifs, line)){
		replaceLine(line, argv[2], argv[3]);
		ofs << line << std::endl; 
	}
	ifs.close();
	ofs.close();
	return (0);
}
