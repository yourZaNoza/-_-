// заголовочный файл для СП_9, задания 2
#pragma once

// сумма элементов
template <typename T>
T sumElements(T* arr, int size, bool (*condition)(T));

// проверка четности
bool isEven(int num);

