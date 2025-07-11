#include "Serializer.hpp"

Serializer::Serializer(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Serializer::Serializer(const Serializer &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

Serializer::~Serializer(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* ptr;

    ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}
