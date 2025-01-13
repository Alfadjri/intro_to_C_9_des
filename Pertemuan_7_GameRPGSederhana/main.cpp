#include "./include/Player.hpp"
#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;
void clearTerminal(){
    system("clear");
}
int main(){
    // inisialisasi
    int selectionlevel;
    string playerName;
    string selectedDififficulty;


    cout << "Welcome to Adventure Game!" << endl;
    cout << "Enter your player name : ";
    cin >> playerName;
    cin.ignore();
    clearTerminal();

    cout << "Choose your difficulty:" << endl;
    cout << "1. Mudah" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Sulit" << endl;
    cout << "Selection : ";
    cin >> selectionlevel;
    cin.ignore();
    switch (selectionlevel)
    {
        case 1:
            selectedDififficulty = "mudah";
            break;
        case 2:
            selectedDififficulty = "medium";
            break;
        case 3:
            selectedDififficulty = "hard";
        default:
            cout << "invalid seleciton , difficulty to hard mode.\n";
            selectedDififficulty = "hard";

            break;
    }
    clearTerminal();

    return 0;
}