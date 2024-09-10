/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:46:33 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/10 16:01:20 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void){

	Sample	s1;
	Sample	s2(42);
	Sample	s3(s1);

	std::cout << "s3 before : " << s3 << std::endl;
	s3 = s2;
	std::cout << "s3 after : " << s3 << std::endl;

	return (0);
}

