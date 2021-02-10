/* Jay-Mark Pascua
   CS202
   02/09/2021
   Holds function + class declarations
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <list>

typedef struct Integers
{   
    int num;
    Integers* next;

    Integers(int n) {
        num = n;
        next = NULL;
    }

}* intPtr;

/* Queue: First-in First-out
o Push a value to the back of the list
o Pop a value from the front of the list
*/
struct Queue
{
    Integers* front, * back = NULL;

    void addQueue(int num); // Add to queue to back of the list

    void delQueue();
};

void printQueue(Queue q); // Prints queue list

/*
� Stack: Last-in First Out
o Push a value to the back of the list
o Pop a value from the back of the list
*/
/*
� Insert and Find
o For this portion, keep your list in sorted order (using some field of Value)
o Search for a value in the list
o Insert a value at the appropriate place in the list
*/
/*
� Print the list out
*/

#endif // !LINKED_LIST_H