/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moyenne.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:25:13 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 22:34:04 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using std::vector;

int	main( void ){
	
	float	moyenne(0);
	vector<double> notes;

	notes.push_back(19);
	notes.push_back(12.5);
	notes.push_back(3.8);
	notes.push_back(14);
	notes.push_back(13.2);
	notes.push_back(5.5);
	notes.push_back(20);

	for (int i = 0; i < notes.size() ; i++){
		moyenne += notes[i];
	}
	moyenne /= notes.size();
	std::cout <<" moyenne des notes : "<< moyenne << std::endl;

	return (0);
}


