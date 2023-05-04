#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const & ref)
{
    _type = ref._type;
}

AMateria& AMateria::operator=(const AMateria& ref)
{
    _type = ref._type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses " << _type << " at " << target.getName() << " *" << std::endl;
}
