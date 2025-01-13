#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>
using namespace std;

class Monster {
    private:
        string name;
        int health;
        int minAttack;
    public :
        Monster(string nama , int darah , int attackPower);

        // method
        int attack();
        void takeDamage(int damage);
        bool isAlive();

        // setter and getter
        string getName() const;
        int getHealth() const;
};
#endif