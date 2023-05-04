#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    // Additional tests
    const Animal* a1 = new Animal();
    const Animal* a2 = new Dog();
    const Animal* a3 = new Cat();

    std::cout << a1->getType() << " " << std::endl;
    std::cout << a2->getType() << " " << std::endl;
    std::cout << a3->getType() << " " << std::endl;

    a1->makeSound();
    a2->makeSound(); // should output "wof wof!"
    a3->makeSound(); // should output "mew mew!"

    delete meta;
    delete j;
    delete i;
    delete a1;
    delete a2;
    delete a3;

    const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << catWrong->getType() << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	delete metaWrong;
	delete catWrong;

    return (0);
}