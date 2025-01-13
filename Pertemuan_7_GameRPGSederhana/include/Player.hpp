#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
using namespace std;

class Player{
    private:
        string name;
        int health;
        int minAttack;
    public:
        // Constuctior
        Player(string nama , int darah , int attackPower);

        // method
        int attack();
        void takeDamage(int damage);
        void defend(int incomingDamage);
        bool isAlive();

        // setter and getter
        string getName() const;
        int getHealth() const;
};
#endif