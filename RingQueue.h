#ifndef RINGQUEUE_H
#define RINGQUEUE_H

/*FRONT ��������� �� ������ ������� �������.
REAR ��������� �� ��������� ������� �������.*/

const int SIZE{ 10 };

struct ringQueue {
    int front, rear, count;
    int data[SIZE];

    void initRingQueue();
    bool isEmpty();
    bool isFull();
    void push(int value);
    void pushRandom();
    void pop();
    void returnStack();
    
    
};


#endif
