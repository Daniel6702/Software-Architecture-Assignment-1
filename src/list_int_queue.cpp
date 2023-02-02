#include "list_int_queue.hpp"
#include "assert.h"

List_int_queue::List_int_queue() { 
    front=NULL;
    rear=NULL;
}

//Structure of node with data and link to next nodes
struct List_int_queue::node {
    int data;
    struct node* link;
};

void List_int_queue::enqueue(int x) {
    node *temp = new node();            //Create new node with new value x
    temp->data= x;
    temp->link = NULL;
    if(empty()){ 
        front = temp;      //Asign to front and rear if empty
        rear = temp;
    } else {
        rear->link = temp; //add node to end of queue
        rear = temp;       // change the rear node
    }
}

int List_int_queue::dequeue() {
    int data;
    if(empty()) {
        return 0;
    } else {
        if (front == rear) { //removing the last element. reset list
            data = front->data;
            free(front);
            front = rear = NULL;
        } else {
            data = front->data; //save data at front
            node *temp = front; 
            front = front->link; //new front is next in line
            free(temp); //freeing allocated mem for dequeued node
        }
    }
    return data; 
}

bool List_int_queue::empty() {
    return (rear == NULL ? true : false); //if rear(queue) is empty return true
}

bool List_int_queue::full() {
    return false; //linked list will never be full. as long as there is free memory. in theory
}

List_int_queue::~List_int_queue() {
    delete front;
    delete rear;
}







/*
void List_int_queue::enqueue(int x) {
    cout<<"Enqueue    ";
    cout<<rear;
    node* temp;
    temp->data = x;
    temp->next = NULL;
    if (rear == NULL) { //empty
        cout<<"rear is equal to NULL   ";
        rear = temp;
        front = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
    printout(rear);
}

void List_int_queue::printout(node* p) {
    while (p != NULL) {
        cout<<p->data;
     p = p->next;
     if(p != NULL)
        cout<<"-->";
  }
  cout<<endl;

  oid List_int_queue::enqueue(int x) {
    if (rear == NULL) {
        node* temp;
        temp->data = x;
        temp->next = rear;
        rear = temp;
        front = temp;
    } else {
        node* temp;
        temp->data = x;
        temp->next = rear;
        rear = temp;
    }
}

int List_int_queue::dequeue() {
    int data = front->data;
    front = front->next;
    return data;
}
}
*/