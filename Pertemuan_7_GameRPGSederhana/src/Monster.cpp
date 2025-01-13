#include"../include/Monster.hpp"
#include "cstdlib"

Monster::Monster(string nama , int darah, int attackPower): name(nama) , health(darah) , minAttack(attackPower){}

int Monster::attack(){
    return rand() % minAttack + 1;
}

void Monster::takeDamage(int demage){
    health = health - demage;
    if (health < 0) health = 0;
}

bool Monster::isAlive(){
    return (health > 0);
}

// set and get
string Monster::getName() const {
    return name;
}

int Monster::getHealth() const{
    return health;
}