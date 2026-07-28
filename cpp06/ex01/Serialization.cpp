#include <iostream>
#include <cstdint>
#include <new>
#include "Serialization.h"

uintptr_t   Serialization::serialize(Data *ptr)
{
    uintptr_t value = reinterpret_cast<uintptr_t>(ptr);

    return (value);
}

Data*   Serialization::deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);

    return (ptr);
}

int     main(void)
{ 
    Data *ptr = new Data;

    uintptr_t  raw = Serialization::serialize(ptr);
    Data    *data = Serialization::deserialize(raw);

    std::cout << ptr << '\n';
    std::cout << raw << '\n';
    std::cout << data << '\n';
    
    std::cout << "raw: " << raw << std::endl;

    std::cout << "data->name: " << data->name << std::endl;
    std::cout << "data->age: " << data->age << std::endl;

    delete ptr;
    return (0);
}