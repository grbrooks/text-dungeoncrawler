#include "Player.h"

Player::Player(string n,int h,int a,int d):GameCharacter(n,h,a,d)

{
  Item dagger=Item("Dagger",0,5,0);
  addItem(dagger);  
}
void Player::addItem(Item item){
  inventory.push_back(item);
  increaseStats(item.health, item.attack,item.defence);
}
  void Player::increaseStats(int h,int a,int d){
    currentHealth+=h;
    maxHeath+=h;
    attack+=a;
    defence+=d;
  }
  void Player::lootRoom(Room *room){
    vector<Item>items=room->items;
    for(int i=0;i < items.size();i++){
      addItem(items[i]);
    }
  }
  void Player::changeRoom(Room*newRoom){
    previousRoom=currentRoom;
    currentRoom=newRoom;
  }
  void lootRoom(Room *);
  void  changeRooms(Room *);
  
  
  



