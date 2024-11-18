#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

// Структура Animal 
// Перепишите все const char* в классе Animal через std::string.
// Перепишите конструкторы через списки инициализации, 
// добавьте в конструкторы с неполными набором полей значения 
// по умолчанию, проинициализируйте их через делегирование конструкторов.
// Добавьте проверки корректности вносимых данных в конструкторы и сеттеры, 
// используя методы работы со строкой.
// Продемонстрируйте работу внесенных изменений в main.


int main() {
    setlocale(LC_ALL, "");
    Animal* ani1 = new Animal("Hugh", "Cat", "Black", 5, 3.0);
    Animal ani2("Paul", "Cat", "Black", 4, 4.0);

    ++*ani1;
    --ani2;

    cout << *ani1;
    cout << ani2;

    if (*ani1 > ani2) cout << "Вес " << ani1->getAnimalName() << " больше\n" << endl;
    else if (*ani1 < ani2) cout << "Вес " << ani2.getAnimalName() << " больше\n" << endl;
    else cout << "Вес равный\n" << endl;

    delete ani1;
    return 0;
}
