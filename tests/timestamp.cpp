/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timestamp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:18:59 by joyeux            #+#    #+#             */
/*   Updated: 2024/08/23 15:22:14 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>

//using namespace std;

int	main(){

	time_t		now = time(NULL);
	struct tm	*local_time = localtime(&now);
	
	std::cout << "The current date and time is: " << now << std::endl;

//	char	*date_time = ctime(&now);
//	char	*date_time = asctime(local_time);

	std::cout << "The current date and time is: " << std::put_time(local_time, "[%G%m%d_%H%M%S]") << std::endl;
}
