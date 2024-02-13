//Вторая ЛР по САОДу задание 1.2.5 

#include "RingQueue.h"
#include "Menu.h"

#include <iostream>

int main()
{
    ringQueue exampleQueue;
    setlocale(LC_ALL, "Russian");
    exampleQueue.initRingQueue();
    int operation{ 0 };
    int value{ 0 };

    std::cout << "Задание 1.2.5 -- кольцевая очередь (статическая)" << std::endl;

    while (true) {
        printMenu(5);
        enteringNumber(0, 5, operation);
        switch (operation)
        {
        case 1:
            exampleQueue.isEmpty() ? std::cout << "Очередь пуста. " << std::endl : std::cout << "Очередь не пуста." << std::endl;
            break;
        case 2:
            exampleQueue.isFull() ? std::cout << "Очередь переполнена. " << std::endl : std::cout << "Очередь не переполнена." << std::endl;
            break;
        case 3:
            printMenu(2);
            enteringNumber(0, 2, operation);
            if (operation == 1) {
                enteringNumber(0, 1000, value);
                exampleQueue.push(value);
            }
            else { exampleQueue.pushRandom(); }
            exampleQueue.returnStateQueue();
            break;
        case 4:
            exampleQueue.pop();
            exampleQueue.returnStateQueue();
            break;
        case 5:
            exampleQueue.returnStateQueue();
            break;
        case 0:
            return 0;
            break;
        default:
            std::cout << "Был прозведен некорректный ввод. Повторите." << std::endl;
            break;
        }
    }
    return 0;
}
