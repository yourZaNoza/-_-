// ������������ ���� ��� ��_9, ������� 1
#ifndef FINDMAX_H
#define FINDMAX_H

// ���� �������
template <typename T>
T findMax(T* arr, int size, T(*compare)(T, T));

// ��������� ���.�����
int compareInt(int a, int b);

// ��������� ���.�����
double compareDouble(double a, double b);

#endif 
