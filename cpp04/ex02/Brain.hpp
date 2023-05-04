#pragma once
#include <iostream>

class Brain {
    private:
        static const int	numberOfIdeas = 100;
    public:
        Brain();
        Brain(Brain const & ref);
        ~Brain();
        
        Brain& operator=(const Brain& ref);

        std::string ideas[numberOfIdeas];
        
        std::string getIdeaByIndex(int i) const;
        void setIdeaByIndex(int i, std::string idea);  
};