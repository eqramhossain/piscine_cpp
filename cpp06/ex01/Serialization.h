#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <cstdint>

struct  Data
{
    int             age = 42;
    std::string     name = "Ekram";
};

class   Serialization
{
    private:
        Serialization(void);
        ~Serialization(void);
        Serialization(Serialization &rhs);
        Serialization &operator=(Serialization &rhs);

    public:
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif