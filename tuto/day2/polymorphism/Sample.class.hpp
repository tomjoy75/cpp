/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:05:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/09 12:10:09 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample{

public:
	Sample( void );
	~Sample( void );

	void	bar(int const d) const;
	void	bar(char const c) const;
	void	bar(float const f) const;
	void	bar(Sample const &i) const;
};

#endif
