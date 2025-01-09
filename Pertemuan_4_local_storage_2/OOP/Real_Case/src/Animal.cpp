#include "../Include/Animal.hpp"
using namespace std;

Animal::Animal(const string& nama_hewan): name(nama_hewan){}
Animal::~Animal(){
    cout << "Animal destructior" << name << endl;
}
string Animal::getName() const{
    return name;
}
void Animal::showType()const{
    cout << name << " is a general animal." << endl;
}
