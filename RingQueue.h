#ifndef RINGQUEUE_H
#define RINGQUEUE_H

/*FRONT указывает на первый элемент очереди.
REAR указывает на последний элемент очереди.*/

const int SIZE{ 3 };

struct ringQueue {
    int front, rear, count;
    int data[SIZE];

    void initRingQueue();
    bool isEmpty();
    bool isFull();
    void push(int value); //enqueue
    void pushRandom();
    void pop(); //dequeue
    void returnStateQueue();
};


#endif
