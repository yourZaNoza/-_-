// �������������� ���� ��� ��_8, ������� 2
#include "contains.h"

bool contains(const int* arr, int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

bool contains(const double* arr, int size, double element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}
