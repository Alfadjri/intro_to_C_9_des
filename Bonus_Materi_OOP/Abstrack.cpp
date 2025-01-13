#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void getSound() const = 0;
};

class Kucing : public Animal{
    public:
        void getSound() const override{
            cout << "Meow !!!" << endl;
        }
};


int main(){
    Kucing kucing;
    cout << "method sound :" << endl;
    kucing.getSound();
    return 0;
}