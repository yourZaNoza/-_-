// СП_3.cpp : Этот файл содержит практические задание из ДЗ_3
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    setlocale(LC_ALL, "");

    // задание 1
    /*int day;
    cout << "Введите число дня недели: " << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Это понедельник" << endl;
        break;
    case 2:
        cout << "Это вторник" << endl;
        break;
    case 3:
        cout << "Это среда" << endl;
        break;
    case 4:
        cout << "Это четверг" << endl;
        break;
    case 5:
        cout << "Это пятница" << endl;
        break;
    case 6:
        cout << "Это суббота" << endl;
        break;
    case 7:
        cout << "Это воскресенье" << endl;
        break;
    default:
        cout << "Неверный ввод" << endl;
    }
    */

    // задание 2
    int c = 0;
    int i = 2;
    int degree = 0;
    do {
        c += 1;
        degree = pow(i, c);
    } while (c < 10);
    cout << "2 в степени 10: " << degree << endl;
    

    // задание 3
    /*int fact = 1;
    int i = 1;
    int n;
    cout << "Введите число: " << endl;
    cin >> n;
    do {
        i += 1;
        fact *= i; 
    } while (i < n);
    cout << "Факториал числа " << n << " равен " << fact << endl;*/

    // задание 4
    /*int n;
    cout << "Введите число: " << endl;
    cin >> n;
    cout << "Последовательность чисел: " << endl;
    for (int i{0}; i < n+1; i++)
    {
        cout << i << endl;
    }*/

    // задание 5
    /*int x = 10;
    for (; x > 0; x -= 2)
    {
        cout << x << endl;
    }*/

    // задание 6
    /*int i = 1;
    int sum = 0;
    while (i < 101)
    {
        sum += i;
        i += 1;
        if (sum > 1000)
        {
            cout << "Сумма = " << sum << endl;
            break;
        }  
    }*/

    // задание 7
    /*int n;
    bool flag = true;
    cout << "Введите число: " << endl;
    cin >> n;

    if (n < 2) {
        flag = false;
        cout << "Не простое" << endl;
    }
    else {
        for (int i = 2; i * i < n; i++) {
            if (n % i == 0) {
                flag = false;
                cout << "Не простое" << endl;
                break;
            }
            else {
                cout << "Простое" << endl;
                break;
            }
        }
    }*/

    // задание 8
    /*int operation;
    int x;
    int y;
    int sum;
    int mul;
    int sub;
    int div;
    int fact;
    int step;
    cout << "Введите тип оператора:" << endl;
    cout << "1 - сложение, 2 - вычитание, 3 - умножение, 4 - dделение, 5 - факториал, 6 - степень: " << endl;
    cin >> operation;

    if (operation == 1) {
        cout << "Введите первое значение" << endl;
        cin >> x;
        cout << "Введите второе значение" << endl;
        cin >> y;
        sum = x + y;
        cout << "Вывод" << endl;
        cout << sum;
    }
    else if (operation == 2) {
        cout << "Введите первое значение" << endl;
        cin >> x;
        cout << "Введите второе значение" << endl;
        cin >> y;
        sub = x - y;
        cout << "Вывод" << endl;
        cout << sub;
    }
    else if (operation == 3) {
        cout << "Введите первое значение" << endl;
        cin >> x;
        cout << "Введите второе значение" << endl;
        cin >> y;
        mul = x * y;
        cout << mul;
    }
    else if (operation == 4) {
        cout << "Введите первое значение" << endl;
        cin >> x;
        cout << "Введите второе значение" << endl;
        cin >> y;
        div = x / y;
        cout << "Вывод" << endl;
        cout << div;
    }
    else if (operation == 5) {
        int n;
        int factorial = 1;
        cout << "Введите значение" << endl;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << "Факториал " << n << " равен " << factorial << endl;

        return 0;
    }
    else if (operation == 6) {
        int first;
        cout << "Введите значение" << endl;
        cin >> first;
        cout << "Введите степень" << endl;
        cin >> step;
        int second = pow(first, step);
        cout << "Вывод" << endl;
        cout << second << endl;

        return 0;
    }
    else {
        cout << "Неверная операция" << endl;
    }*/
    return 0;
}
