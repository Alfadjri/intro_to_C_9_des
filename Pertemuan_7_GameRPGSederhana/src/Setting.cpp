#include "../include/Setting.hpp"


const vector<string> Setting::MONSTER_NAMES = {
    "Goblin", "Troll", "Dragon", "Orc", "Zombie"
};

Monster Setting::generateMonster(int level , const string& difficulty){
    string name = MONSTER_NAMES[rand() % MONSTER_NAMES.size()];
    int health = calculateHealty(level, difficulty);
    int attackPower = calculateAttackPower(level,difficulty);
    return Monster(name,health,attackPower);
}
int Setting::calculateHealty(int level , const string& difficulty){
    if(difficulty == "mudah"){
        return 50 + (level * 10);
    } else if (difficulty == "medium"){
        return 75 + (level * 15);
    }else{
        return 100 + (level * 20);
    }
}
int Setting::calculateAttackPower(int level , const string& difficulty){
    if(difficulty == "mudah"){
        return 5 + (level * 2);
    } else if (difficulty == "medium"){
        return 10 + (level * 3);
    }else{
        return 15 + (level * 5);
    }
}