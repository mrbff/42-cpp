#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" 
    << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
    << std::endl << "I really do!" << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]"
    << std::endl << "I cannot believe adding extra bacon costs more money."
    << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
    
void Harl::warning(void)
{
    std::cout << "[ WARNING ]"
    << std::endl << "I think I deserve to have some extra bacon for free."
    << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
    
void Harl::error(void)
{
    std::cout << "[ ERROR ]"
    << std::endl << "This is unacceptable!"
    << std::endl << "I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(int level)
{
    switch (level) {
        case 0 :
            (this->*levelFunctions[0])();
        case 1 :
            (this->*levelFunctions[1])();
        case 2 :
            (this->*levelFunctions[2])();
        case 3 :
            (this->*levelFunctions[3])();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}