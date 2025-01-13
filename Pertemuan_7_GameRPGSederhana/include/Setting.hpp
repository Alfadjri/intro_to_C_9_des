#ifndef SETTING_HPP
#define SETTING_HPP

#include "Monster.hpp"
#include <string>
#include <vector>
using namespace std;

class Setting{
    private :
        static int calculateHealty(int level ,const string& difficulty);
        static int calculateAttackPower(int level , const string& difficulty );
    public:
        static const vector<string> MONSTER_NAMES;
        static Monster generateMonster(int level , const string& difficulty );
};
#endif