/* Jay-Mark Pascua
   CS202
   02/09/2021
   Test a queue, stack, insertion, and search in a linked list
*/
#include <iostream>
#include "Linked_List.h"

int main() {
    Queue q;
    q.addQueue(5);

    q.addQueue(10);

    q.addQueue(20);

    printQueue(q);
}