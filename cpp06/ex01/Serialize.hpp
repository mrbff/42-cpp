#pragma once
#include <cstdint>
#include "Data.hpp"

class Serialize {
    public:
        ~Serialize();
        
        static uintptr_t    serialize(Data* ptr);
        static Data*        deserialize(uintptr_t raw);

    private:
        Serialize();
};