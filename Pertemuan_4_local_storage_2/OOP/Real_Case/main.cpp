#include "./Include/Dog.hpp"
#include "./Include/Kucing.hpp"

int main(){
    // Animal* animal[] = {
    //     new Dog("Spike"),
    //     new Kucing("Tom")
    // };
    // for(Animal* type_animal : animal){
    //     type_animal->showType();
    //     type_animal->speak();
    //     delete type_animal;
    // }
    Dog dog("Spike");
    dog.showType();
    dog.speak();
    

    return 0;
}