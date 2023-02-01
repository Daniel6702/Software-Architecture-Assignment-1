#include "array_int_queue.hpp"
#include "assert.h"

Array_int_queue::Array_int_queue(int size) { //Contructor. Declares standard values for variables
    queue = new int[size];
    max_length = size;
    length = 0;
}

void Array_int_queue::enqueue(int x) {
    assert(length < max_length);
    queue[length] = x; //adds value to the rear of queue
    length++; //the queue increases in length by 1
}

int Array_int_queue::dequeue() {
    assert(length > 0);
    int data = queue[0]; //get value at front of queue

    for (int i = 0; i < length; i++) { //move every value forward
        queue[i] = queue[i+1];
    }

    length--; //reduce length of queue
    return data; //return the front value
}

bool Array_int_queue::empty() {
    return length == 0;
}

bool Array_int_queue::full() {
    return length == max_length;
}

Array_int_queue::~Array_int_queue() {
    delete queue;
}
