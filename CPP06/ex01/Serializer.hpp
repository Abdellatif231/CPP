#include <cstdlib>
#include <iostream>


typedef size_t uintptr_t;

typedef struct Data_s 
{
        std::string type;
        int val;
}       Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
