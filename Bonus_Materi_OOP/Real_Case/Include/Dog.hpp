#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
using namespace std;

class Dog : public Animal{
    public:
        Dog(const string& nama_dog);
        ~Dog();
        void speak() const override;
        void showType() const override;
};

#endif
