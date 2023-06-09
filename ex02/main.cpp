/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:04:42 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/09 14:49:34 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	// ClapTrap	Hanna("Hanna");
	// ClapTrap	Ella("Ella");

	// ClapTrap	Shapeshifter = Ella;
	// std::cout << Hanna << std::endl;
	// Hanna.attack("Yoda");
	// std::cout << Hanna << std::endl;
	// Hanna.takeDamage(8);
	// std::cout << Hanna << std::endl;
	// Hanna.takeDamage(5);
	// Hanna.attack("Fred");
	// for (int i = 0; i <= 10; i++)
	// 	Hanna.beRepaired(1);
	// Hanna.attack("Fred");
	// std::cout << Hanna << std::endl;
	// ClapTrap clone = ClapTrap(Hanna);
	// std::cout << "hihi" << clone << std::endl;
	
	// Shapeshifter = Hanna;
	// std::cout << Shapeshifter << std::endl;

	// ClapTrap Shapeshifter2(Hanna);
	// std::cout << Shapeshifter2 << std::endl;

	// ScavTrap Hugo("Hugo");
	// std::cout << Hugo << std::endl;

	// Hugo.attack("DarkVader");
	// Hugo.takeDamage(70);
	// std::cout << Hugo << std::endl;
	// Hugo.beRepaired(5);

	// ScavTrap Hugo2 = Hugo;
	// std::cout << Hugo2 << std::endl;
	// Hugo.guardGate();

	FragTrap Hugo("Hugo");
	std::cout << Hugo << std::endl;

	Hugo.attack("DarkVader");
	Hugo.takeDamage(70);
	std::cout << Hugo << std::endl;
	Hugo.beRepaired(5);

	FragTrap Hugo2 = Hugo;
	std::cout << Hugo2 << std::endl;
	Hugo.highFivesGuys();
}