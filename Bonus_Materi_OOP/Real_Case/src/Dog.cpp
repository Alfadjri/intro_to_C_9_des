#include "../Include/Dog.hpp"

Dog::Dog(const string& nama_dog) : Animal(nama_dog){}
Dog::~Dog(){
    cout << "Dog destructior " << name << endl;
}
void Dog::speak() const{
    cout << "nama hewan " << name << " Suara : Woff !!!" << endl;
}
void Dog::showType() const{
    cout << name << " is a Dog " << endl;
}