// исполняемый файл для СП_9, задания 2
#include "sumEven.h"

// сумма
template <typename T>
T sumElements(T* arr, int size, bool (*condition)(T)) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        if (condition(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

// проверка четности
bool isEven(int num) {
    return num % 2 == 0;
}


template int sumElements<int>(int* arr, int size, bool (*condition)(int));
