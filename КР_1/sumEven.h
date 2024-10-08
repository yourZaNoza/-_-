// заголовочный файл для КР_1, задача 10
#ifndef SUM_EVEN_H
#define SUM_EVEN_H

template <typename T>
T sumElements(T* arr, int size, bool (*condition)(T));

bool isEven(int num);

#endif
