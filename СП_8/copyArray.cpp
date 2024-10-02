// исполнительный файл для СП_8, задания 1
#include "copyArray.h"

void copyArray(const int* src, int* dest, int size) {
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
}

void copyArray(const double* src, double* dest, int size) {
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
}
