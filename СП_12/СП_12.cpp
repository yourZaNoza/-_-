#include <iostream>
#include "Human.h"
#include "Car.h"
#include "Animal.h"
using namespace std;

// Задача 1. Структура Human. 
// 1. Ограничьте доступ к записи неправильных данных извне : 
// объявите поля как private, методы структуры объявите public.
// Добавьте метод для заполнения полей структуры.Создайте 2 объекта – статически и динамически.
// Вызовите функции для каждого объекта и выведите данные в консоль.
// 2. Перепишите ваш пользовательский тип Human с использованием класса.
// Разделите класс Human на заголовочный файл и файл с реализацией.
// Проверьте работу вашего класса в main.cpp

/*int main()
 {
    Human* hum1 = new Human;
    hum1->initHuman("Зоя", "Никифорова", 17, 65.5, 175);
    hum1->BirthYear();
    hum1->BMI();
    hum1->displayHuman();

    Human hum2;
    hum2.initHuman("Фёдор", "Достоевский", 65, 96.6, 165);
    hum2.BirthYear();
    hum2.BMI();
    hum2.displayHuman();

    delete hum1;
    return 0;
}*/

// Задача 2. Структура Car.

/*int main()
  {
    Car* car1 = new Car;
    car1->initCar("Мерседес", "Черный", "Кроссовер", 5, 50000);
    car1->displayCar();
    car1->Fuel();
    car1->MileageChange();
    
    Car car2;
    car2.initCar( "БМВ", "Белый", "Универсал", 4, 40000 );
    car2.displayCar();
    car2.Fuel();
    car2.MileageChange();

    delete car1;
    return 0;
}*/

// Задача 3. Структура Animal.
int main()
{
    Animal* ani1 = new Animal;
    ani1->initAnimal("Хьюша", "Кот", "Черный", 5, 3);
    ani1->displayAnimal();
    ani1->Feed();
    ani1->NameChange();

    Animal ani2;
    ani2.initAnimal( "Палыч", "Кот", "Черный", 4, 4 );
    ani2.displayAnimal();
    ani2.Feed();
    ani2.NameChange();

    delete ani1;
    return 0;
}