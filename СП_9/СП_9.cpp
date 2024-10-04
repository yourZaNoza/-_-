// СП_8.cpp : Этот файл содержит практические задание из ДЗ_8
#include <iostream>
using namespace std;

#include <iostream>
#include "findMax.h"
#include "sumEven.h"

// для двух задач используется один main()
int main() {
    setlocale(LC_ALL, "");
    // задание 1
    /*int intArray[] = { 1, 2, 3, 4, 5 };
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Целочисленный массив: ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    int maxInt = findMax(intArray, intArraySize, compareInt);
    cout << "Максимальный элемент: " << maxInt << endl;

    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "Вещественный массив: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    double maxDouble = findMax(doubleArray, doubleArraySize, compareDouble);
    cout << "Максимальный элемент: " << maxDouble << endl;*/

    // задание 2
    int intArray[] = { 1, 2, 3, 4, 5 };
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Массив ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    int sumEven = sumElements(intArray, intArraySize, isEven);
    cout << "Сумма четных элементов: " << sumEven << endl;

    return 0;
}
