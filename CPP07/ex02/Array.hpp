#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
    private:
        T* array;
        size_t _size;

    public:
        Array(void) : array(NULL), _size(0) {};

        Array(unsigned int n) : array(new T[n]), _size(n) {};

        Array(const Array& other) : array(new T[other._size]), _size(other._size) {
            for (size_t i = 0; i < this->_size; i++) {
                this->array[i] = other.array[i];
            }
        };

        Array &operator=(const Array &other) {
            if (this == other)
                return *this;

            delete this->array;

            this->size = other._size;
            this->array = new T[this->_size];

            for (size_t i = 0; i < this->_size; i++) {
                this->array[i] = other.array[i];
            }
            return *this;
        };

        ~Array() {
            delete this->array;
        };

        T& operator[](size_t index) {
            if (index >= this->_size)
                throw std::out_of_range("Index out of bounds");

            return this->array[index];
        };

        const T& operator[](size_t index) const {
            if (index >= this->_size)
                throw std::out_of_range("Index out of bounds");

            return this->array[index];
        };

        size_t size() const {
            return this->_size;
        };
};

#endif

