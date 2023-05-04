#pragma once
#include "AMateria.hpp"

class IMateriaSource
{

    public:

        virtual ~IMateriaSource() {}
        virtual void		learnMateria(AMateria *materia_to_learn) = 0;
        virtual AMateria	*createMateria(std::string const & type) = 0;

};