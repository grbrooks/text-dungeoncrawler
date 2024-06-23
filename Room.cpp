#include "Room.h"

Room::Room(int p, bool ie, vector<Item> items,vector<GameCharacter>gcs){
    pos=p;
    isExit=ie;
    items=items;
    enemies=gcs;
}
void Room::clearLoot(){
    items.clear();
}
void Room::clearEnemies(){
    enemies.clear();
}


void clearLoot();
void clearEnemies();