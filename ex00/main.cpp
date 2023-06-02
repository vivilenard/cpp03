/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:04:42 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/02 13:06:53 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap robot1;
	ClapTrap	robot2("hilde");

	robot1 = robot2;
	//std::cout << robot1._name << std::endl;
}