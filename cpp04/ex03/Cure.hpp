#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    virtual ~Cure();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

