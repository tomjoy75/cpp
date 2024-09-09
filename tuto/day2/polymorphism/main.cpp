/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:31:57 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/09 13:38:53 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void){

	Sample	sample;
	
	sample.bar(42);
	sample.bar(3.14f);
	sample.bar('c');
	sample.bar(sample);

	return (0);
}
