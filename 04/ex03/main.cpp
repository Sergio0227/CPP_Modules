#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* donald = new Character("Trump");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		donald->equip(tmp);
		tmp = src->createMateria("cure");
		donald->equip(tmp);
		ICharacter* elon = new Character("Musk");
		donald->use(0, *elon);
		donald->use(1, *elon);
		std::cout << std::endl;

		delete donald;
		delete elon;
		delete src;
	}
	{
		std::cout << "1. Create new MateriaSource and learn materias (check maximum too):" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		AMateria *mat = new Cure();
		src->learnMateria(mat);
		std::cout << std::endl;

		std::cout << "2. Create character from another (copy)" << std::endl;
		Character *dur0 = new Character("Sonic");
		ICharacter *dur1 = new Character(*dur0);
		delete dur0;
		delete dur1;
		std::cout << std::endl;

		std::cout << "3. Create materias and equip them" << std::endl;
		AMateria* tmp;
		ICharacter *dur2 = new Character("Shadow");
		tmp = src->createMateria("ice");
		dur2->equip(tmp);
		tmp = src->createMateria("cure");
		dur2->equip(tmp);
		tmp = src->createMateria("hi");
		dur2->equip(tmp);
		delete src;
		std::cout << std::endl;

		std::cout << "4. Check maximum equipped too:" << std::endl;
		AMateria *cure = new Cure();
		AMateria *ice = new Ice();
		dur2->equip(cure);
		dur2->equip(cure);
		dur2->equip(ice);
		dur2->unequip(2);
		delete cure;
		dur2->unequip(2);
		dur2->unequip(6);
		std::cout << std::endl;

		std::cout << "5. Use materias on new chacarter:" << std::endl;
		ICharacter* bob = new Character("a little angry child");
		dur2->use(0, *bob);
		dur2->use(1, *bob);
		dur2->use(2, *bob);
		dur2->use(6, *bob);
		dur2->use(-4, *bob);
		dur2->use(3, *bob);
		delete bob;
		std::cout << std::endl;

		delete dur2;

		return (0);
	}
}