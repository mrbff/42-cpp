#include "Dog.hpp"
#include "Cat.hpp"

#define NUMBER_OF_ANIMALS 4

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[3]->getBrain();
	brain->ideas[0] = "Idea1";
	brain->ideas[1] = "Idea2";
	brain->ideas[2] = "Idea3";
	brain->ideas[3] = "Idea4";
	std::cout << animals[3]->getBrain()->ideas[0] << std::endl;

	*(animals[1]) = *(animals[3]);
	std::cout << animals[1]->getBrain()->ideas[2] << std::endl;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
}