// КР_1.cpp : Этот файл содержит задачи из КР_1
#include <iostream>
#include <cmath>
using namespace std;

#include "resizeArray.h"
#include "sumEven.h"

// для задачи 4
/*#include <string>
string toUpperCase(const string& str) { // ссылка на объект string
    string result = str; // копия строки для сравнения
    for (char& c : result) {
        if (c >= 'a' && c <= 'z') {
            c = c - 32; 
        }
    } // 97 до 122, -32 из его ASCII кода
    return result;
}*/

// для задачи 6
/*int multiplyOrAdd(float a, float b, bool add)
{
    if (add) {
        float s = a * b;
        return s;
    }
    else {
        float s = a + b;
        return s;
    }

}*/
// для задачи 7
/*int sqrti(int a)
{
    if (a > 0) {
        float s = sqrt(a);
        return s;
    }
    else {
        exit(0);
    }

}*/
// для задачи 8
//int square(int a)
//{
//    int s = a * a;
//    return s;
//}

//int main()
//
//{
//    setlocale(LC_ALL, "");
//
//    // задача 1
//    /*int c = 0;
//    int i = 2;
//    int degree = 0;
//    while (c < 10) {
//        c += 1;
//        degree = pow(i, c);
//    }
//    cout << "2 в степени 10: " << degree << endl;*/
//
//    // задача 2
//    /*int size;
//    cout << "Введите размер массива: " << endl;
//    cin >> size;
//    int* a = new int[size];
//    cout << "Введите значения массива: " << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cin >> a[i];
//    }
//    cout << "Певернутый массив: " << endl;
//    for (int i = size - 1; i >= 0; i--)
//    {
//        cout << a[i] << " ";
//    }
//    delete[]a;*/
//
//    // задача 3
//    /*int fact = 1;
//    int i = 1;
//    int n;
//    cout << "Введите число: " << endl;
//    cin >> n;
//    do {
//        i += 1;
//        fact *= i;
//    } while (i < n);
//    cout << "Факториал числа " << n << " равен " << fact << endl;*/
//
//    // задача 4
//    /*string input;
//    cout << "Введите строку: ";
//    cin >> input;
//
//    string upperCaseString = toUpperCase(input);
//    cout << "Строка ЗАГЛАВНЫМИ буквами: " << upperCaseString << endl;*/
//
//    // задача 5
//    /*int n;
//    cout << "Введите число: " << endl;
//    cin >> n;
//    cout << "Четные числа: " << endl;
//    for (int i = 0; i < n+1; i++)
//    {
//        if (i % 2 == 0)
//        {
//            cout << i << " ";
//        }
//    }*/
//
//    // задача 6
//    /*float x;
//    float y;
//    bool flag;
//    cout << "Введите число a: ";
//    cin >> x;
//    cout << "Введите число b: ";
//    cin >> y;
//    cout << "Введите операцию (0 - это сложение; 1 - это умножение): ";
//    cin >> flag;
//    float result = multiplyOrAdd(x, y, flag);
//    cout << "Ваш ответ: " << result << endl;*/
//    
//    // задача 7
//    /*float x;
//    cout << "Введите число: ";
//    cin >> x;
//    if (x > 0) {
//        float result = sqrti(x);
//        cout << "Квадратный корень числа: " << result << endl;
//    }
//    else {
//        cout << "Negative argument" << endl;
//    }*/
//
//    // задача 8
//    int x;
//    cout << "Введите число: ";
//    cin >> x;
//    int result = square(x);
//    cout << "Квадрат числа: " << result << endl;
//
//    return 0;  
//}
// задача 9
int main() {

    setlocale(LC_ALL, "");
    int intArraySize = 5;
    int* intArray = new int[intArraySize] {1, 2, 3, 4, 5};

    cout << "Оригинальный целочисленный массив: ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    int newIntArraySize = 2;
    intArray = resizeArray(intArray, intArraySize, newIntArraySize);
    intArraySize = newIntArraySize;

    cout << "Измененный целочисленный массив: ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    delete[] intArray;

    int doubleArraySize = 5;
    double* doubleArray = new double[doubleArraySize] {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Оригинальный вещественный массив: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    int newDoubleArraySize = 2;
    doubleArray = resizeArray(doubleArray, doubleArraySize, newDoubleArraySize);
    doubleArraySize = newDoubleArraySize;

    cout << "Измененный вещественный массив: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    delete[] doubleArray; 

    return 0;
}
// задача 10
//int main() {
//    setlocale(LC_ALL, "");
//
//    int intArray[] = { 1, 2, 4, 5, 7 };
//    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
//
//    cout << "Массив ";
//    for (int i = 0; i < intArraySize; ++i) {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//
//    int sumEven = sumElements(intArray, intArraySize, isEven);
//    cout << "Сумма четных элементов: " << sumEven << endl;
//
//    return 0;
//}