#include <iostream>
#include <stdint.h>
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
