#include "../include/Player.hpp"

// constructor
Player::Player(string nama , int darah , int attackPower) 
    : name(nama) , health(darah),minAttack(attackPower) {}

// method
int Player::attack(){
    return minAttack;
}

void Player::takeDamage(int demage){
    health = health - demage;
    if (health < 0) health = 0;
        
}

bool Player::isAlive(){
    return (health > 0);
}

// set and get
string Player::getName() const {
    return name;
}

int Player::getHealth() const{
    return health;
}