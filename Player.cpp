#include "Player.h"

Player::Player(string n,int h,int a,int d):GameCharacter(n,h,a,d)
{

  Item dagger=Item("Dagger",0,5,0);
  addItem(dagger);  
}