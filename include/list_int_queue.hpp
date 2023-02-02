#ifndef LIST_INT_QUEUE_H
#define LIST_INT_QUEUE_H

#include "int_queue.hpp"

class List_int_queue : public Int_queue { //Inherits from Int_queue
private:
    struct node;
    node *front, *rear;
public:
    void enqueue(int);
    int dequeue();
    bool full();
    bool empty();
    List_int_queue();
    ~List_int_queue();
};

#endif