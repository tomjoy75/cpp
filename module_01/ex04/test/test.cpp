/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:01:46 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/06 10:00:42 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

bool	compareFiles(std::string &file1, std::string &file2){

	std::cout << ITALIC << "file1 : " << file1 << ", file2 : " << file2 << RESET << std::endl;
	std::ifstream	f1(file1.c_str());
	std::ifstream	f2(file2.c_str());
	if (!f1.is_open() || !f2.is_open()){
		std::cout << "Error: Impossible to open the input file" << std::endl;
		return (1);
	}

	std::string		line1, line2;
	while (std::getline(f1, line1) && std::getline(f2, line2)){
//		std::cout << "TEST: line1 : \"" << line1 << "\" of size : " << line1.size() << ", line2 : \"" << line2 << "\" of size : " << line2.size() << std::endl;
		if (line1 != line2)
			return false;
	}
	if (std::getline(f1, line1) || std::getline(f2, line2))
		return false;
//		std::cout << "Error" << std::endl;
//	std::cout << "TEST: f1.eof() : \"" << f1.eof() << "\" , f2.eof() : \"" << f2.eof() << "\"" << std::endl;
	return (f1.eof() && f2.eof());
}

int		main( void ){
	std::string	testDir = "test/test_cases/";

	std::string	inputFiles[] = {"normal", "empty", "double", "lorem", "complex", "invalid_complex"};
	std::string	expectedOutput[] = {"normal.replace", "empty.replace", "double.replace", "lorem.replace", "complex.replace", "invalid_complex.replace"};
	std::string	old_word = "foo";
	std::string	new_word = "bar";

	for (int i = 0; i < 6; i++){
		std::string	inputFile = testDir + inputFiles[i];
		std::string	expectedFile = testDir + "expected/" + expectedOutput[i];
		std::string outputFile = inputFile + ".replace";

		std::string	command = "./superSed " + inputFile + " " + old_word + " " + new_word;
		if (system(command.c_str()))
			std::cerr << RED << "the command coudn't be executed for line " << i << RESET << std::endl;
		
		std::cout << BLUE << "command : " << command << RESET << std::endl;
		
		if (compareFiles(outputFile, expectedFile))
			std::cout << GREEN << BOLD << "Test " << i + 1 << ": \"" << inputFiles[i] << "\" is valid !" << RESET << std::endl;
		else
			std::cout << RED << BOLD << "Test " << i + 1 << ": \"" << inputFiles[i] << "\" is invalid !" << RESET << std::endl;
	}

	return (0);
}

// c++ -g3 test/test.cpp -o testSed
