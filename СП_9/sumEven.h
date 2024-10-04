// заголовочный файл для СП_9, задания 2
#ifndef SUM_EVEN_H
#define SUM_EVEN_H

// сумма элементов
template <typename T>
T sumElements(T* arr, int size, bool (*condition)(T));

// проверка четности
bool isEven(int num);

#endif
