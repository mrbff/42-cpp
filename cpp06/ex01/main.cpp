#include "Serialize.hpp"
#include <iostream>


int main()
{
    Data *data = new Data;

    data->name = "randName";
    data->n = 999;

    std::cout << "Name: " << Serialize::deserialize(Serialize::serialize(data))->name << std::endl;
    std::cout << "Number: " << Serialize::deserialize(Serialize::serialize(data))->n << std::endl;

    delete data;

    return EXIT_SUCCESS;
}