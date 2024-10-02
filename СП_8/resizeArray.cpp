// исполнительный файл для СП_8, задания 
#include "resizeArray.h"
#include <cstring>

// тут функция для изменения размера массива целых чисел
int* resizeArray(int*& arr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    int copySize = (newSize < oldSize) ? newSize : oldSize;
    std::memcpy(newArr, arr, copySize * sizeof(int));
    delete[] arr;
    arr = newArr;
    return arr;
}

// а тут функция для изменения размера массива вещественных чисел
double* resizeArray(double*& arr, int oldSize, int newSize) {
    double* newArr = new double[newSize];
    int copySize = (newSize < oldSize) ? newSize : oldSize;
    std::memcpy(newArr, arr, copySize * sizeof(double));
    delete[] arr;
    arr = newArr;
    return arr;
}
