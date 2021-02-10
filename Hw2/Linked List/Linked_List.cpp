/* Jay-Mark Pascua
   CS202
   02/09/2021
   Holds function + class definitions
*/
#include "Linked_List.h"

void Queue::addQueue(int num) { // Add to queue to back of the list
    Integers* temp = new Integers(num); // Holds value

    if (back == NULL) { // If queue is empty, set front and back to the new number
        front = temp;
        back = temp;
        return;
    }
    back->next = temp; // The pointer to the last value is now equal to that of temp
    back = temp;
}

void Queue::delQueue() { // Delete from front of the list
    if (front == NULL) // If queue is empty, return
        return;

    Integers* temp = front; // Hold the last value
    front = front->next; // Move front one unit ahead

    if (front == NULL) // If front of list is empty, then back is empty too
        back = NULL;

    delete(temp);
}

void printQueue(Queue q) { // Prints queue list
    std::cout << "PRINTING QUEUE LIST" << std::endl;
    Integers* temp = q.front;
    while (temp != NULL) {
        std::cout << temp->num << std::endl;
        temp = temp->next;
    }
    std::cout << std::endl;
}