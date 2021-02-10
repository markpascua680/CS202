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

#endif // !LINKED_LIST_H
