// исполняемый файл для СП_9, задания 1
#include "findMax.h"

// максимальный элемент в массиве
template <typename T> 
// тут я использую шаблон, чтобы не писать 2 функции под цел. и вещ. числа
T findMax(T* arr, int size, T(*compare)(T, T)) {

    T maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (compare(arr[i], maxElement) > 0) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// сравнение цел.чисел
int compareInt(int a, int b) {
    return a - b;
}

// сравнение вещ.чисел
double compareDouble(double a, double b) {
    return a - b;
}

// указание на шаблонную функцию с разными типами данных
template int findMax<int>(int* arr, int size, int (*compare)(int, int));
template double findMax<double>(double* arr, int size, double (*compare)(double, double));
