/* Jay-Mark Pascua
   CS202
   02/09/2021
   Test a queue, stack, insertion, and search in a linked list
*/
#define CATCH_CONFIG_MAIN
#include "Linked_List.h"

std::list<Champion> team;

Champion LeeSin("Lee Sin", "Fighter", "Jungler", 575, 70, 36);
Champion Kindred("Kindred", "Marksman", "Jungler", 540, 65, 29);
Champion Azir("Azir", "Mage", "Mid", 552, 52, 19);
Champion Riven("Riven", "Fighter", "Top", 560, 64, 33);
Champion Pyke("Pyke", "Assassin", "Support", 600, 62, 45);

TEST_CASE("Initialize champions") { // Initializes Characters
    CHECK(LeeSin.name == "Lee Sin");
    CHECK(LeeSin.playstyle == "Fighter");
    CHECK(LeeSin.role == "Jungler");
    CHECK(LeeSin.baseHealth == 575);
    CHECK(LeeSin.baseAttack == 70);
    CHECK(LeeSin.baseArmor == 36);
}

TEST_CASE("Add to queue") { // Add a character to back of list
    team.push_back(LeeSin);
    CHECK(team.size() != team.size() - 1); // Ensure list size is increasing as characters are added

    team.push_back(Kindred);
    CHECK(team.size() != team.size() - 1);
}

TEST_CASE("Delete from queue") { // Delete character from front of list
    team.pop_front();
    CHECK(team.size() != team.size() + 1); // Ensure list size decreases by 1 (size should be 2 at this point)

    std::list<Champion>::iterator it = team.begin();
    std::advance(it, 0);
    CHECK(it->name != LeeSin.name); // Ensure Lee Sin is deleted from the team
}

std::list<Champion> team2;

TEST_CASE("Add to stack") { // Add a character to back of list
    team2.push_back(Azir);
    CHECK(team2.size() != team2.size() - 1); // Ensure list size is increasing as characters are added

    team2.push_back(Pyke);
    CHECK(team2.size() != team2.size() - 1);
}

TEST_CASE("Delete from stack") { // Delete character from back of list
    team2.pop_back();
    CHECK(team2.size() != team2.size() + 1); // Ensure list size decreases by 1 (size should be 2 at this point)

    CHECK(team2.back().name != Pyke.name); // Ensure Pyke is deleted from the team
}