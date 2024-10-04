// ����������� ���� ��� ��_9, ������� 1
#include "findMax.h"

// ������������ ������� � �������
template <typename T> 
// ��� � ��������� ������, ����� �� ������ 2 ������� ��� ���. � ���. �����
T findMax(T* arr, int size, T(*compare)(T, T)) {

    T maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (compare(arr[i], maxElement) > 0) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// ��������� ���.�����
int compareInt(int a, int b) {
    return a - b;
}

// ��������� ���.�����
double compareDouble(double a, double b) {
    return a - b;
}

// �������� �� ��������� ������� � ������� ������ ������
template int findMax<int>(int* arr, int size, int (*compare)(int, int));
template double findMax<double>(double* arr, int size, double (*compare)(double, double));
