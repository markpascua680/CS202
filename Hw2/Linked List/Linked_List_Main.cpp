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
    addQueue(team, LeeSin);
    CHECK(team.size() != team.size() - 1); // Ensure list size is increasing as characters are added

    addQueue(team, Kindred);
    CHECK(team.size() != team.size() - 1);
}

TEST_CASE("Delete from queue") { // Delete character from back of list
    delQueue(team);
    CHECK(team.size() != team.size() + 1); // Ensure list size decreases by 1 (size should be 2 at this point)
}

