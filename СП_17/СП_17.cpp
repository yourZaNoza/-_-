#include <iostream>
#include "Animal.h"
using namespace std;

// Класс Animal 
// Реализуйте 2 класса-наследника – домашние и дикие животные. 
// Добавьте в классы - наследники как минимум по 1 полю, которое 
// не может быть использовано в родительском классе. Поля обозначьте как private.
// Создайте необходимые конструкторы и геттеры / сеттеры.
// Добавьте в классы - наследники как минимум по 1 методу – для вывода информации о данных.
// Продемонстрируйте работу внесенных изменений в main.



int main() {
    setlocale(LC_ALL, "");
    House* ani1 = new House("Hugh", "Cat", "Black", 5, 3.0, "House");
    ani1->displayPlace();
    Wild* ani2 = new Wild("Lev", "Lion", "Orange", 8, 80.0, "Savannah");
    ani2->displayNaturePlace();

    delete ani1;
    delete ani2;
    return 0;
}
