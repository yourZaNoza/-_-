// ������������ ���� ��� ��_9, ������� 1
#pragma once

// ���� �������
template <typename T>
T findMax(T* arr, int size, T(*compare)(T, T));

// ��������� ���.�����
int compareInt(int a, int b);

// ��������� ���.�����
double compareDouble(double a, double b);
