/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:14:23 by joyeux            #+#    #+#             */
/*   Updated: 2024/07/26 19:22:31 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int	main() {
	Sample1 instance1 ( 'a', 42, 4.2f );
	Sample2 instance2 ( 'b', 13, 3.14f );

	return (0);
}

