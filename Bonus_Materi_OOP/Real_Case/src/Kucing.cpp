#include "../Include/Kucing.hpp"

Kucing::Kucing(const string& nama_kucing) : Animal(nama_kucing){}
Kucing::~Kucing(){
    cout << "Kucing destructior" << name << endl;
}
void Kucing::speak() const{
    cout << "nama hewan : " << name << "Suara : Meow !!!" << endl;
}
void Kucing::showType() const{
    cout << name << "is a Kucing " << endl;
}