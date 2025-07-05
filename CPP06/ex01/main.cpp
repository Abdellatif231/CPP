#include "Serializer.hpp"

int main()
{
    Data* ptr;
    ptr = new Data;
    uintptr_t raw;

    raw = Serializer::serialize(ptr);

    Data* ptr2 = Serializer::deserialize(raw);

    std::cout << ptr << std::endl;
    std::cout << ptr2 << std::endl;
    
    delete ptr;
}
