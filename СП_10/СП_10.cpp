// СП_10.cpp: Этот файл содержит задания из ДЗ_10

#include <iostream>
#include "caesarCipher.h"
#include "calculate.h"
using namespace std;

// задание 1, caesarCipher.h, caesarCipher.cpp
/*int main() {
    setlocale(LC_ALL, "");
    char operation;
    int shift;
    int length;
    char* text;

    cout << "__ !! __ ДАННАЯ ПРОГРАММА СОЗДАНА ТОЛЬКО ДЛЯ АНГЛИЙСКОЙ РАСКЛАДКИ __ !! __ " << endl;
    do {
        cout << "Введите операцию (E - зашифровка, D - дешифровка): ";
        cin >> operation;

        if (operation != 'E' && operation != 'D' && operation != 'e' && operation != 'd') {
            cout << "Неверная операция. Выход." << endl;
            break;
        }

        cout << "Введите длину текста: ";
        cin >> length;

        cout << "Введите значение сдвига: ";
        cin >> shift;

        text = new char[length + 1]; // +1 символ в конце строки
        cout << "Введите текст: ";
        cin.ignore(); // игнорируем последний нулевой символ
        cin.getline(text, length + 1);

        bool encrypt = (operation == 'E');

        cout << "Результат: ";
        for (int i = 0; i < length; ++i) {
            cout << caesarCipher(text[i], shift, encrypt); // игнорируем последний нулевой символ
        }
        cout << endl;

        delete[] text;

    } while (true);

    return 0;
}*/

// задание 2 , calculate.h, calculate.cpp
int main() {
    setlocale(LC_ALL, "");
    char operation;
    int a, b, n;
    bool continueCalculation = true;

    do {
        cout << "" << endl;
        cout << "    Выберите операцию: +, -, *, /, !, ^" << endl;
        cout << "    Если вы хотите выйти, введите F" << endl;
        cin >> operation;

        switch (operation) {
        case 'F':
            cout << "Выход";
            continueCalculation = false;
            break;
        case '+':
            cout << "Введите два целых числа (через пробел): ";
            cin >> a >> b;
            cout << "Результат: " << add(a, b) << endl;
            break;
        case '-':
            cout << "Введите два целых числа (через пробел): ";
            cin >> a >> b;
            cout << "Результат: " << subtract(a, b) << endl;
            break;
        case '*':
            cout << "Введите два целых числа (через пробел): ";
            cin >> a >> b;
            cout << "Результат: " << multiply(a, b) << endl;
            break;
        case '/':
           cout << "Введите два целых числа (через пробел): ";
            cin >> a >> b;
            try {
                cout << "Результат: " << divide(a, b) << endl;
            }
            catch (const std::invalid_argument& e) {
                cerr << "Ошибка: " << e.what() << endl;
            }
            break;
        case '!':
            cout << "Введите число: ";
            cin >> n;
            try {
                cout << "Результат: " << factorial(n) << endl;
            }
            catch (const std::invalid_argument& e) {
                cerr << "Ошибка: " << e.what() << endl;
            }
            break;
        case '^':
            cout << "Введите основание и степень (через пробел): ";
            cin >> a >> b;
            try {
                cout << "Результат: " << power(a, b) << endl;
            }
            catch (const std::invalid_argument& e) {
                cerr << "Ошибка: " << e.what() << endl;
            }
            break;
        default:
            cout << "Неверная операция" << endl;
            break;
        }
    } while (continueCalculation);
    
    return 0;
}