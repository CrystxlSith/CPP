#include "FragTrap.hpp"


// int	main()
// {
// 	FragTrap	temp("Daniel");
// 	FragTrap	Daniel("No name");

// 	/* Assignment check */
// 	temp.setEnergyPoints(8);
// 	Daniel = temp;

// 	/* Info */
// 	std::cout << "\n---------- FragTrap Daniel ----------" << std::endl;
// 	std::cout << "Hitpoints: " << Daniel.getEnergyPoints() << " ";
// 	std::cout << "Energy: " << Daniel.getEnergyPoints() << " ";
// 	std::cout << "Attack Damage: " << Daniel.getAttackDamage() << " ";
// 	std::cout << "Status: Active" << std::endl;

// 	/* Test */
// 	std::cout << "\nStart attacking...\n" << std::endl;

// 	Daniel.attack("Sharks");
// 	Daniel.attack("Pirates");
// 	Daniel.takeDamage(3);
// 	Daniel.takeDamage(14);
// 	Daniel.beRepaired(10);
// 	Daniel.attack("Dragon");
// 	Daniel.attack("Spirits");
// 	Daniel.attack("Kings");

// 	std::cout << "\nFights are over...\n" << std::endl;
// }


int	main(void)
{
	FragTrap a("A");
	FragTrap b("B");

	std::cout << b.getEnergyPoints() << std::endl;
	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	a.setAttackDamage(50);
	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(5);
	b.setEnergyPoints(0);
	b.beRepaired(1);
	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(1);
	a.highFivesGuys();
}
// int main( void )
// {
//     FragTrap fragtrap("FragTrap");
//     FragTrap fragtrap2("FragTrap2");

//     fragtrap.attack("Skag");
//     fragtrap.takeDamage(5);
//     fragtrap.beRepaired(5);
//     fragtrap2.attack("Skag");
//     fragtrap2.takeDamage(5);
//     fragtrap2.beRepaired(5);
//     fragtrap.guardGate();
//     fragtrap.highFivesGuys();
//     return 0;
// }
