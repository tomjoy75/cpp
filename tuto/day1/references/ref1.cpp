/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:07:26 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/30 23:18:17 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	int	nbOfBalls = 42;
	int	*ballsPtr = &nbOfBalls;
	int	&ballsRef = nbOfBalls;
	//int	&ballsRef2; FAUX

	std::cout << nbOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	*ballsPtr = 21;
	std::cout << nbOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	ballsRef = 84;
	std::cout << nbOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	
	return (0);
}
