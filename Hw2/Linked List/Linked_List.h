/* Jay-Mark Pascua
   CS202
   02/09/2021
   Holds function + class declarations
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <list>
#include "catch.h"

struct Champion
{
    std::string name;
    std::string playstyle;
    std::string role;
    int baseHealth;
    int baseAttack;
    int baseArmor;

    Champion(std::string n, std::string p, std::string r, int bH, int bAtt, int bAr):name(n), playstyle(p), role(r), baseHealth(bH), baseAttack(bAtt), baseArmor(bAr) {

    }
};

/* Queue: First-in First-out
o Push a value to the back of the list
o Pop a value from the front of the list
*/
void addQueue(std::list<Champion>& team, Champion& c); // Add a champion to the back of list

void delQueue();
/*
• Stack: Last-in First Out
o Push a value to the back of the list
o Pop a value from the back of the list
*/
/*
• Insert and Find
o For this portion, keep your list in sorted order (using some field of Value)
o Search for a value in the list
o Insert a value at the appropriate place in the list
*/
/*
• Print the list out
*/

#endif // !LINKED_LIST_H
