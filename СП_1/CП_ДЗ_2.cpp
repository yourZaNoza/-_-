#include <iostream>
using namespace std;
int main()
{
    // ������� 1
    int number = 42;
    cout << number << endl;

    // ������� 2
    double a = 3.14;
    double b = 2.17;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;

    // ������� 3
    char letter = 'A';
    int code = int(letter);
    cout << code << endl;

    // ������� 4
    bool flag = true;
    cout << boolalpha << flag << endl;
    flag = false;
    cout << boolalpha << flag << endl;

    // ������� 5
    int value;
    cout << "input value: " << endl;
    cin >> value;
    cout << (value % 2 == 0 ? "true" : "false") << endl;

    // ������� 6
    int temp;
    cout << "input celsius temperature: " << endl;
    cin >> tamp;
    cout << "fahrenheit temperature " << (temp * 9 / 5 + 32) << endl;

    return 0;
}