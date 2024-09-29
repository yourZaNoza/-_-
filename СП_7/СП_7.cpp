// СП_7.cpp : Этот файл содержит практические задание из ДЗ_7
//

//#include <stdlib.h>
//#include <cmath>
#include <iostream>
#include <cstring>
using namespace std;

// проверка работы рекурсии
//int fact(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return n * fact(n - 1);
//	}
//}
//int main() {
//
//	int x = 5;
//	int result = fact(x);
//	cout << result;
//
//	return 0;
//}

// задание 1
//int recursiveSum(const int* arr, int size) {
//    if (size == 0) {
//        return 0; // если массив пуст то его сумма будет равна 0
//    }
//    return arr[0] + recursiveSum(arr + 1, size - 1); // а тут рекурсия
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int size;
//    cout << "Введите размер массива: ";
//    cin >> size;
//    int* arr = new int[size];
//    cout << "Введите элементы массива: ";
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//    int sum = recursiveSum(arr, size); 
//    cout << "Сумма элементов: " << sum << endl;
//    delete[] arr;
//    return 0;
//}
// задание 2
//void recursiveCopy(const char* src, char* dest) {
//    if (*src == '\0') {
//        *dest = '\0'; // конец строки (массива)
//        return;
//    }
//    *dest = *src; // копирование
//    recursiveCopy(src + 1, dest + 1);
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    const char* src = "Привет, Мир!";
//    char dest[20]; // массив копирования
//    std::cout << "Оригинальная строка: " << src << std::endl;
//    recursiveCopy(src, dest); // копирование
//    std::cout << "Скопированная строка: " << dest << std::endl;
//
//    return 0;
//}
// задание 3 
bool isPalindrome(const char* str, int left, int right) { 
    if (left >= right) {
        return true; // если указатели пересеклись или встретились
    }
    if (str[left] != str[right]) {
        return false; // если символы не равны это не палиндром
    }
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    setlocale(LC_ALL, "");
    const char* str1 = "анна";
    const char* str2 = "привет";

    cout << "Эта строка \"" << str1 << "\" палиндром? " << (isPalindrome(str1, 0, strlen(str1) - 1) ? "да" : "нет") << endl;
    cout << "Эта строка \"" << str2 << "\" палиндром? " << (isPalindrome(str2, 0, strlen(str2) - 1) ? "да" : "нет") << endl;

    return 0;
}
