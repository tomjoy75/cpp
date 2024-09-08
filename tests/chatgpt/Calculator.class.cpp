/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculator.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:33:39 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/08 22:10:32 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iostream>

class	Calculator{

public:
	int	add(int a, int b){
		return (a + b);
	}
	int 	sub(int a, int b){
		return (a - b);
	}
	int	mult(int a, int b){
		return (a * b);
	}
};

int	main( void ){

	srand((unsigned)time(0));
	int	a = ( rand()%10 + 1);
	int	b = ( rand()%10 + 1);
	char	answer;
	Calculator	calc;
	// Je definis un pointeur de fonction p_ans, pour une fonction de la classe Calculator avec comme arguments 2 int, et renvoyant 1 int;
	int	(Calculator::*p_ans)(int a, int b);  

	std::cout << "a = " << a << ", and b = " << b << std::endl;
	std::cout << "Choose (A)dd, (S)ubstract or (M)ultiply : ";
	std::cin >> answer;
	// J'assigne au pointeur de fonction la bonne fonction de Calculator suivant la réponse de l'utilisateur
	switch (answer)
	{
		case 'A':
			p_ans = &Calculator::add;
			break;
		case 'S':
			p_ans = &Calculator::sub;
			break;
		case 'M':
			p_ans = &Calculator::mult;
			break;
		default:
			std::cout << "Wrong command!" << std::endl;
			return (1);
	}
	// J'appelle la fonction par l'appel de fonctions de l'instance calc;
	int	c = (calc.*p_ans)(a, b);
	std::cout << "Result : " << c << std::endl;
			

	return (0);
}
