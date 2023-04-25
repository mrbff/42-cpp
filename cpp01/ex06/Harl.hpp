#pragma once
#include <iostream>
#include <string>

class Harl {
    public:
        Harl();
        ~Harl();
            
        void complain(int level);
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        
        void (Harl::*levelFunctions[4])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
        };

};