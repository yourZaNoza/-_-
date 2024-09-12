// СП_2.cpp : Этот файл содержит практические задание из ДЗ_2
//
#include <iostream>
using namespace std;
int main()
{
    // задание 1
    int number = 42;
    cout << number << endl;

    // задание 2
    double a = 3.14;
    double b = 2.17;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;

    // задание 3
    char letter = 'A';
    int code = int(letter);
    cout << code << endl;

    // задание 4
    bool flag = true;
    cout << boolalpha << flag << endl;
    flag = false;
    cout << boolalpha << flag << endl;

    // задание 5
    int value;
    cout << "input value: " << endl;
    cin >> value;
    cout << (value % 2 == 0 ? "true" : "false") << endl;

    // задание 6
    int temp;
    cout << "input celsius temperature: " << endl;
    cin >> temp;
    cout << "fahrenheit temperature " << (temp * 9 / 5 + 32) << endl;

    return 0;
}