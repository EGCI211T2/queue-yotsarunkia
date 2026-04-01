
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue
{
    NodePtr headPtr, tailPtr;
    int size;

public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};

void Queue::enqueue(int x)
{
    NodePtr new_node = new NODE(x);
    if (tailPtr == NULL)
    {
        headPtr = tailPtr = new_node;
    }
    else
    {
        tailPtr->get_next();
        tailPtr = new_node;
    }
    size++;
}

int Queue::dequeue()
{
    if (size > 0)
    {
        int data = headPtr->get_value();
        NodePtr temp = headPtr;
        headPtr = headPtr->get_next();
        if (headPtr = NULL)
        {
            tailPtr = NULL;
        }
        delete temp;
        size--;
        return data;
    }
    return -1;
}

Queue::Queue()
{
    // initialize Queue
    size = 0;
    headPtr = NULL;
    tailPtr = NULL;
}
Queue::~Queue()
{
    while (size != 0)
    {
        dequeue();
    }
}

#endif
