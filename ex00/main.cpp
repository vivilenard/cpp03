/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:04:42 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/08 18:57:09 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Hanna("Hanna");
	ClapTrap	Ella("Ella");

	ClapTrap	Shapeshifter = Ella;
	std::cout << Hanna << std::endl;
	Hanna.attack("Yoda");
	std::cout << Hanna << std::endl;
	Hanna.takeDamage(8);
	std::cout << Hanna << std::endl;
	Hanna.takeDamage(5);
	Hanna.attack("Fred");
	for (int i = 0; i <= 10; i++)
		Hanna.beRepaired(1);
	Hanna.attack("Fred");
	std::cout << Hanna << std::endl;
	
	Shapeshifter = Hanna;
	std::cout << Shapeshifter << std::endl;

	ClapTrap Shapeshifter2(Hanna);
	std::cout << Shapeshifter2 << std::endl;

	
	//std::cout << robot1._name << std::endl;
}