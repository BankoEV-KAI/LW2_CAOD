#include <iostream>
#include "RingQueue.h"

void ringQueue::initRingQueue()
{
	front = rear = -1;
	count = 0;
}

bool ringQueue::isEmpty()
{
	return ((front == -1) ?  true : false);
}

bool ringQueue::isFull()
{
	return ((front == 0 && rear == SIZE - 1 || front == rear + 1) ? true : false);
}

void ringQueue::push(int value)
{
	if (!isFull()) {
		if (front == -1) front = 0;
		rear++; count++;
		data[rear] = value;
		std::cout << "�������� �������: " << value << std::endl;
	}
	else {
		std::cout << "���������� �������� ����������, ������� �����������. " << std::endl;
	}
}

void ringQueue::pushRandom()
{
	if (!isFull()) {
		if (front == -1) front = 0;
		rear++; count++;
		srand(time(0));
		int value{ 0 };
		value = rand() % 100;
		data[rear] = value;
		std::cout << "�������� �������: " << value << std::endl;
	}
	else {
		std::cout << "���������� �������� ����������, ������� �����������. " << std::endl;
	}
}

void ringQueue::pop()
{
	if (!isEmpty()) {
		int value = data[front];
		if (front == rear) {
			initRingQueue();
		} else{
			front++;
		}
		std::cout << "������ ������� �� ������ �������: " << value << std::endl;
		count--;
	}
	else{
		std::cout << "�������� �������� ����������, ������� �����" << std::endl;
	}
}

void ringQueue::returnStack()
{
	std::cout << std::endl << "������� ��������� �������: " << std::endl;
	if (isEmpty()) {
		std::cout << "������� �����" << std::endl;
	}
	else {
		std::cout << "��������� �� ������ �������: " << front << std::endl
			<< "��������� �� ��������� �������: " << rear << std::endl
			<< "���������� ��������� � �������: " << count << std::endl;
	}
}
