/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_sec.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:16:04 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/16 18:23:04 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nb_sec.hpp"

int	main(void)
{
	std::cout << nb_sec(1) << " seconde(s)" << std::endl;

	return (0);
}

int	nb_sec(int h, int m, int s)
{
	int	total(0);

	total = h * 60 * 60;
	total += m * 60;
	total += s;

	return (total);
}
