// исполнительный файл для КР_1, задача 9
#include "resizeArray.h"
#include <cstring>

int* resizeArray(int*& arr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    int copySize = (newSize < oldSize) ? newSize : oldSize;
    std::memcpy(newArr, arr, copySize * sizeof(int));
    delete[] arr;
    arr = newArr;
    return arr;
}

double* resizeArray(double*& arr, int oldSize, int newSize) {
    double* newArr = new double[newSize];
    int copySize = (newSize < oldSize) ? newSize : oldSize;
    std::memcpy(newArr, arr, copySize * sizeof(double));
    delete[] arr;
    arr = newArr;
    return arr;
}
