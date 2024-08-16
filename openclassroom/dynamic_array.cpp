/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_array.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:11:46 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 22:23:18 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using	std::string;
using	std::vector;

int	main(){
	vector<int>	tab(5, 3);
	vector<string>	list(12, "no name");

	tab.push_back(8);

	for (int i = 0; i < 6; i++){
		std::cout << "case " << i << " : " << tab[i] << std::endl;
	}
	return (0);
}
