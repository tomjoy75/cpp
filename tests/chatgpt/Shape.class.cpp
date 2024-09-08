/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:12:09 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/08 22:38:15 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class	Shape{

public:
	void	drawCircle(){
		std::cout << "Circle" << std::endl;
	}
	void	drawSquare(){
		std::cout << "Square" << std::endl;
	}
	void	drawTriangle(){
		std::cout << "Triangle" << std::endl;
	}
	void	drawShape(int choice){
		(this->*f[choice])();
	}

	
private:
	void (Shape::*f[3])() = {
		&Shape::drawCircle,
		&Shape::drawSquare,
		&Shape::drawTriangle};
};

int	main(int argc, char **argv){

	Shape	shape;

	if (argc > 1)
		shape.drawShape(atoi(argv[1]));
	return (0);
}
