// заголовочный файл для СП_9, задания 1
#pragma once

// макс элемент
template <typename T>
T findMax(T* arr, int size, T(*compare)(T, T));

// сравнение цел.чисел
int compareInt(int a, int b);

// сравнение вещ.чисел
double compareDouble(double a, double b);
