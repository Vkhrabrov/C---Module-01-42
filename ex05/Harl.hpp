/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:38:37 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/04/09 22:29:33 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include "iostream"
#include "string"

class Harl {
public:
	Harl();
	~Harl();
	void complain(std::string level);
	
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};





#endif