// СП_8.cpp : Этот файл содержит практические задание из ДЗ_8
#include <iostream>
using namespace std;

#include "copyArray.h"
#include "contains.h"
#include "resizeArray.h"

// пример работы перегрузки
//int absoluteValue(int num)
//{
//    if (num < 0)
//    {
//        num = -num;
//    }
//    return num;
//}
//float absoluteValue(float num)
//{
//    if (num < 0)
//    {
//        num = -num;
//    }
//    return num;
//}
//int main()
//{
//    setlocale(LC_ALL, "");
//    int a = -7;
//    float b = -4.5;
//    cout << absoluteValue(a) << endl;
//    cout << absoluteValue(b) << endl;
//    return 0;
//}
// 
// задание 1 (copyArray)

// int main() {
//    setlocale(LC_ALL, "");
//    int intArray[] = { 1, 2, 3, 4, 5 };
//    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
//    int* intArrayCopy = new int[intArraySize];
//
//    copyArray(intArray, intArrayCopy, intArraySize);
//
//    cout << "Оригинальный целочисленный массив: ";
//    for (int i = 0; i < intArraySize; ++i) {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Скопированный массив: ";
//    for (int i = 0; i < intArraySize; ++i) {
//        cout << intArrayCopy[i] << " ";
//    }
//    cout << endl;
//
//    delete[] intArrayCopy;
//
//    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
//    double* doubleArrayCopy = new double[doubleArraySize];
//
//    copyArray(doubleArray, doubleArrayCopy, doubleArraySize);
//
//    cout << "Оригинальный вещестенный массив: ";
//    for (int i = 0; i < doubleArraySize; ++i) {
//        cout << doubleArray[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Скопированный двойной массив: ";
//    for (int i = 0; i < doubleArraySize; ++i) {
//        cout << doubleArrayCopy[i] << " ";
//    }
//    cout << endl;
//    delete[] doubleArrayCopy; 
//    return 0;
//}

// задание 2 (contains)

//int main() {
//    setlocale(LC_ALL, "");
//    int intArray[] = { 1, 2, 3, 4, 5 };
//    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
//    int intElementToFind = 3;
//
//    cout << "Целочисленный массив: ";
//    for (int i = 0; i < intArraySize; ++i) {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//
//    if (contains(intArray, intArraySize, intElementToFind)) {
//        cout << "Элемент " << intElementToFind << " в целочисленном массиве." << endl;
//    }
//    else {
//        cout << "Элемент " << intElementToFind << " не в целочисленном массиве." << endl;
//    }
//
//    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
//    double doubleElementToFind = 3.3;
//
//    cout << "Вещественный массив: ";
//    for (int i = 0; i < doubleArraySize; ++i) {
//        cout << doubleArray[i] << " ";
//    }
//    cout << endl;
//
//    if (contains(doubleArray, doubleArraySize, doubleElementToFind)) {
//        cout << "Элемент " << doubleElementToFind << " в вещественном массиве." << endl;
//    }
//    else {
//        cout << "Элемент " << doubleElementToFind << " не в вещественном массиве." << endl;
//    }
//    return 0;
//}

// задание 3 (resizeArray)

int main() {

    setlocale(LC_ALL, "");
    int intArraySize = 5;
    int* intArray = new int[intArraySize] {1, 2, 3, 4, 5};

    cout << "Оригинальный целочисленный массив: ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    int newIntArraySize = 4;
    intArray = resizeArray(intArray, intArraySize, newIntArraySize);
    intArraySize = newIntArraySize;

    cout << "Измененный целочисленный массив: ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    delete[] intArray; 

    int doubleArraySize = 5;
    double* doubleArray = new double[doubleArraySize] {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Оригинальный вещественный массив: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    int newDoubleArraySize = 3;
    doubleArray = resizeArray(doubleArray, doubleArraySize, newDoubleArraySize);
    doubleArraySize = newDoubleArraySize;

    cout << "Измененный вещественный массив: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    delete[] doubleArray; // Освобождение памяти

    return 0;
}
