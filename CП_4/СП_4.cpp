// CП_4.cpp : Этот файл содержит практические задание из ДЗ_4
//

#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    /*int arr[] = { 5, 4 ,3, 4, 9 };
    int arrayLength = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0;
    for (int i = 0; i < arrayLength; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            ++evenCount;
        }
    }
    cout << "Количество четных элементов в массиве {5, 4, 3, 4, 9,} равно: " << evenCount << endl;
    */
    
    // задание 1
    /*int array[7] = { 2, 3, 4, 5, 2, 8, 10 };

    for (auto i : array)
    {
        cout << i << ' ';
    }*/

    // задание 2
    /*int sum = 0;
    int arr[] = { 500, 4, 24, 15, 100, 105 };
    for (auto i : arr)
    {
        sum += i;
    }
    cout << sum << endl;*/

    // задание 3 
    /*const int n = 5;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "Введите " << i + 1 << "-й элемент массива: ";
        cin >> arr[i];
    }
    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    int c;
    cout << "\nВведите число для подсчёта кратности : ";
    cin >> c;
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] % c == 0) {
            ++count;
        }
    cout << "\nКоличество элементов массива, кратных числу С = " << count << endl;*/

    // задание 4
    /*int arr[] = { 5, 4, 3, 4, 9 };
    int arrayLength = sizeof(arr) / sizeof(arr[0]);
    int M = arr[0];
    int m = arr[0];
    for (int i = 0; i < arrayLength; ++i)
    {
        if (arr[i] > M) {
            M = arr[i];
        }
    }
    cout << M << endl;

    for (int i = 0; i < arrayLength; ++i)
    {
        if (arr[i] < m) {
            m = arr[i];
        }
    }
    cout << m << endl;

    cout << "Разница между элементами " << M << " и " << m << " составляет " << M-m << endl;
    */

    // задание 5 
    /*int arr[] = { 5, 4, 3, 4, 9 };
    int arrayLength = sizeof(arr) / sizeof(arr[0]);
    int M = arr[0];
    for (int i = 0; i < arrayLength; ++i)
    {   
        if (arr[i] > M) {
            M = arr[i];
            cout << "Позиция максимального элемента: " << i << endl;
        }
    }
    */
    // задание 6 
    /*int size = 10;
    int *a = new int[size];
    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        a[i] = i;
    }

    for (int i = 0; i < size; ++i)
    {
        sum += a[i];
    }
    cout << sum;
    delete []a;*/

    // задание 7
    /*int size = 5;
    int *a = new int[size];
    cout << "Введите значения массива: " << endl;
    for (int i = 0; i < size; i++) 
    {
      cin >> a[i];
    }
    cout << "Певернутый массив: " << endl;
    for (int i = size - 1; i >= 0; i--) 
    { 
      cout << a[i] << " ";
    }
    delete []a;*/

    // задание 8
   /* int str = 0;
    char stroka[] = { "AaBbCcDdEeFfGgggggg" };
    int size = sizeof(stroka) / sizeof(stroka[0]);

     for (int i = 0; i < size - 1; i++) 
     {
        if (stroka[i] == 'A') {
          str++;
        }

        if (stroka[i] == 'B') {
          str++;
        }

        if (stroka[i] == 'C') {
          str++;
        }

        if (stroka[i] == 'D') {
          str++;
        }

        if (stroka[i] == 'E') {
          str++;
        }

        if (stroka[i] == 'F') {
          str++;
        }

        if (stroka[i] == 'G') {
          str++;
        }

      }
      cout << "Количество заглавных букв: " << str;*/

    // задание 9
      /*char stroka[] = { "Aaa1323#aa" };
      int size = sizeof(stroka) / sizeof(stroka[0]);
      int counter = 0;

      for (int i = 0; i < size - 1; i++) {
        if (stroka[i] == 'A') {
          counter++;
        }

        if (stroka[i] == 'a') {
          counter++;
        }
      }
      cout << "Количество А в строке: " << counter;*/

  // задание 10
    char stroka[] = { "aaaabbbbccccdddd" };
    int size = sizeof(stroka) / sizeof(stroka[0]);

    for (int i = 0; i < size - 1; i++) {
        if (stroka[i] == 'a') {
            stroka[i] = 'A';
        }

        if (stroka[i] == 'b') {
            stroka[i] = 'B';
        }

        if (stroka[i] == 'c') {
            stroka[i] = 'C';
        }

        if (stroka[i] == 'd') {
            stroka[i] = 'D';
        }
    }
    cout << stroka;

    return 0;
}
