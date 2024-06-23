#include<string>
#ifndef GAMECHARACTER_H
#define GAMECARACTER_H
using namespace std;


class GameCharacter{
    public:
    string name;
    int maxHeath,currentHealth,attack,defence;

GameCharacter(string,int,int,int);
int takeDamage(int);
bool checkIsDead();
};
#endif