// СП_2.cpp : Этот файл содержит практические задание из ДЗ_2
//
#include <iostream>
using namespace std;
#define cubeof(x) (x*x*x)
int main()
{
    // задание 1
    /*int number = 42;
    cout << number << endl;*/

    // задание 2
    /*double a = 3.14;
    double b = 2.17;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;*/

    // задание 3
    /*char letter = 'A';
    int code = int(letter);
    cout << code << endl;*/

    // задание 4
    /*bool flag = true;
    cout << boolalpha << flag << endl;
    flag = false;
    cout << boolalpha << flag << endl;*/

    // задание 5
    /*int value;
    cout << "input value: " << endl;
    cin >> value;
    cout << (value % 2 == 0 ? "true" : "false") << endl;*/

    // задание 6
    /*int temp;
    cout << "input celsius temperature: " << endl;
    cin >> temp;
    cout << "fahrenheit temperature " << (temp * 9 / 5 + 32) << endl;*/

    // задание 7
    /*int x = 10;
    cout << ++x << endl;
    x = x - 3;
    cout << x << endl;
    cout << x % 2 << endl;*/

    // задание 8
    /*const float pi = 3.14159;
    int r;
    cout << "input radius: " << endl;
    cin >> r;
    float C = 2 * pi * r;
    cout << "round's length " << C << endl;*/

    // задание 9
    /*int x, cube;
    cout << "input value x: " << endl;
    cin >> x;
    cube = cubeof(x);
    cout << "cube for x = " << cube << endl;*/

    // задание 10
    int x, y;
    cout << "enter value x: " << endl;
    cin >> x;
    cout << "enter value y" << endl;
    cin >> y;
    int add = x + y;
    int sub = x - y;
    int mult = x * y;
    int div = x / y;
    cout << "addition = " << add << endl << "substraction = " << sub << endl << "multiply = " << mult << endl << "division = " << div << endl;

    return 0;
}