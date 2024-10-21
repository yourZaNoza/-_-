// СП_10.cpp: Этот файл содержит задание 1 из ДЗ_10

#include <iostream>
#include "caesarCipher.h"
using namespace std;

int main() {
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
}
