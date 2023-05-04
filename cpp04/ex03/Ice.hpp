#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice( const Ice &src );
        ~Ice();

        Ice		&operator=( const Ice &other );

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};