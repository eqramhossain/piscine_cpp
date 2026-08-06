#include <stdint.h>
#include "Serialization.h"

Serialization::Serialization(void)
{
}

Serialization::~Serialization(void)
{
}

Serialization::Serialization(const Serialization &rhs)
{
	*this = rhs;
}

Serialization &Serialization::operator=(const Serialization &rhs)
{
	if (this != &rhs)
	{
		//
	}
	return (*this);
}

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
