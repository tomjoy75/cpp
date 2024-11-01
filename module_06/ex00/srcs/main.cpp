/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:56:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/01 18:54:26 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>


int	main(int argc, char **argv){
	if (argc < 2){
		std::cout << "Not enough argument" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return(0);
}

/*
// Main de test
int	main (void){
	std::cout << "float-max : " << std::numeric_limits<float>::max() << std::endl;
}
*/
/*
int main() {
    // Cas de test pour les littéraux char
    std::cout << BLUE << "Testing char literals:" << RESET << std::endl;
    ScalarConverter::convert("a");
    ScalarConverter::convert("z");
    ScalarConverter::convert("5");
    ScalarConverter::convert("!");

    // Cas de test pour les littéraux int
    std::cout << BLUE << "\nTesting int literals:" << RESET << std::endl;
    ScalarConverter::convert("0");
    ScalarConverter::convert("-42");
    ScalarConverter::convert("2147483647"); // INT_MAX
    ScalarConverter::convert("-2147483648"); // INT_MIN
    std::cout << GREEN << "\nover int max (" << std::numeric_limits<int>::max() << ")" << RESET << std::endl;
    ScalarConverter::convert("2147483648");
    std::cout << GREEN << "\nunder int max (" << std::numeric_limits<int>::min() << ")" << RESET << std::endl;
    ScalarConverter::convert("-2147483649");

    // Cas de test pour les littéraux float
    std::cout << BLUE << "\nTesting float literals:" << RESET << std::endl;

    ScalarConverter::convert("0.0f");
    ScalarConverter::convert("-4.2f");
    ScalarConverter::convert("340282346638528859811704183484516925440.0f");
    ScalarConverter::convert("0.0000000000000000000000000000000000000117549f");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("-inff");
	// Cas d'overflow
    std::cout << GREEN << "\nover float max (" << std::numeric_limits<float>::max() << ")" << RESET << std::endl;
 ScalarConverter::convert("340282350000000000000000000000000000000.0f"); // Cas de dépassement de FLT_MAX
//    std::cout << GREEN << "\nunder float min (" << std::numeric_limits<float>::min() << ")" << RESET << std::endl;
// ScalarConverter::convert("0.00000000000000000000000000000000000000001f"); // Cas de dépassement de FLT_MIN
    // Cas de test pour les littéraux double
    std::cout << BLUE << "\nTesting double literals:" << RESET << std::endl;
    ScalarConverter::convert("0.0");
	ScalarConverter::convert("-4.2");
    ScalarConverter::convert("17976931348623157081452742373170435679807056752584499659891747680315726078002853876058955863276687817154045895351438246423432132688946418276846754670353751698604991057655128207624549009038932894407586850845513394230458323690322294816580855933212334827479782620414472316873817718091929988125040402618412485836.0");
    std::cout << GREEN << "\nover double max (" << std::numeric_limits<double>::max() << ")" << RESET << std::endl;
 ScalarConverter::convert("179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858369.0"); 
}*/
