#ifndef ARRAY_INT_QUEUE_H
#define ARRAY_INT_QUEUE_H

#include "int_queue.hpp"

class Array_int_queue : public Int_queue {
private:
    int *queue;
    int max_length;
    int length;
public:
    void enqueue(int);
    int dequeue();
    bool full();
    bool empty();
    Array_int_queue(int);
    ~Array_int_queue();
};

#endif
