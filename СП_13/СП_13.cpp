#include <iostream>
#include "Human.h"
#include "Car.h"
#include "Animal.h"
using namespace std;

// Задача 1. Структура Human. 
// 1. Добавьте конструкторы и в ваш класс(по умолчанию и параметризованные 
// для каждого набора полей).В main создайте объекты под каждый конструктор, 
// как минимум 2 из объектов должны быть динамическими.Выведите данные в консоль.
// 2. Добавьте деструктор в ваш класс.Продемонстрируйте работу конструкторов 
// и деструктора в зависимости от области видимости объектов класса.
// 3. Создайте геттеры и сеттеры для приватных полей класса.
// Как минимум в 2 сеттера добавьте проверку вносимых данных.
// Продемонстрируйте работу с ограничениями в консоли.


/*int main()
 {
    Human* hum1 = new Human("Зоя", "Никифорова", 17, 65.5, 175);
    hum1->displayHuman();
    hum1->BirthYear();
    hum1->BMI();
    cout << "Введите новый возраст: ";
    int newHumanAge;
    cin >> newHumanAge;
    hum1->setHumanAge(newHumanAge);
    cout << "Новый возраст: " << hum1->getHumanAge() << endl;
    cout << "" << endl;

    Human hum2("Фёдор", "Достоевский", 65, 96.6);
    hum2.displayHuman();
    hum2.BirthYear();
    hum2.BMI();
    cout << "Введите новый вес: ";
    float newHumanWeight;
    cin >> newHumanWeight;
    hum2.setHumanWeight(newHumanWeight);
    cout << "Новый вес: " << hum2.getHumanWeight() << endl;
    cout << "" << endl;

    Human hum3("Александр", "Пушкин", 30);
    hum3.displayHuman();
    hum3.BirthYear();
    hum3.BMI();

    Human* hum4 = new Human("Лев", "Толстой");
    hum4->displayHuman();
    hum4->BirthYear();
    hum4->BMI();

    delete hum1;
    delete hum4;
    return 0;
}*/

// Задача 2. Структура Car.
// 1. Добавьте конструкторы и в ваш класс(по умолчанию и параметризованные для каждого набора полей).
// В main создайте объекты под каждый конструктор, как минимум 2 из объектов должны быть динамическими. Выведите данные в консоль.
// 2. Добавьте деструктор в ваш класс.Продемонстрируйте работу конструкторов и деструктора в зависимости от области видимости объектов класса.
// 3. Создайте геттеры и сеттеры для приватных полей класса. Как минимум в 2 сеттера 
// добавьте проверку вносимых данных.Продемонстрируйте работу с ограничениями в консоли.

/*int main()
{
    Car* car1 = new Car("Мерседес", "Черный", "Кроссовер", 5, 50000);
    car1->displayCar();
    car1->Fuel();
    car1->MileageChange();
    cout << "Введите новый пробег: ";
    float newCarMileage;
    cin >> newCarMileage;
    car1->setCarMileage(newCarMileage);
    cout << "Новый пробег: " << car1->getCarMileage() << endl;
    cout << "" << endl;

    Car car2("БМВ", "Белый", "Универсал", 4);
    car2.displayCar();
    car2.Fuel();
    car2.MileageChange();
    cout << "Введите новый объем двигателя: ";
    float newCarEC;
    cin >> newCarEC;
    car2.setCarEC(newCarEC);
    cout << "Новый объем: " << car2.getCarEC() << endl;
    cout << "" << endl;

    Car car3("Порш", "Пурпурный", "Купе");
    car3.displayCar();
    car3.Fuel();
    car3.MileageChange();

    Car* car4 = new Car("Ауди", "Аквамарин");
    car4->displayCar();
    car4->Fuel();
    car4->MileageChange();

    delete car1;
    delete car4;
    return 0;
}*/

// Задача 3. Структура Animal.
// 1. Добавьте конструкторы и в ваш класс(по умолчанию и параметризованные для каждого набора полей).
// В main создайте объекты под каждый конструктор, как минимум 2 из объектов должны быть динамическими. Выведите данные в консоль.
// 2. Добавьте деструктор в ваш класс.Продемонстрируйте работу конструкторов и деструктора в зависимости от области видимости объектов класса.
// 3. Создайте геттеры и сеттеры для приватных полей класса. Как минимум в 2 сеттера 
// добавьте проверку вносимых данных.Продемонстрируйте работу с ограничениями в консоли.

int main()
{
    Animal* ani1 = new Animal("Хьюша", "Кот", "Черный", 5, 3);
    ani1->displayAnimal();
    ani1->Feed();
    ani1->NameChange();
    cout << "Введите новый вес: ";
    float newAnimalWeight;
    cin >> newAnimalWeight;
    ani1->setAnimalWeight(newAnimalWeight);
    cout << "Новый вес: " << ani1->getAnimalWeight() << endl;
    cout << "" << endl;
    

    Animal ani2("Палыч", "Кот", "Черный", 4);
    ani2.displayAnimal();
    ani2.Feed();
    ani2.NameChange();
    cout << "Введите новый возраст: ";
    int newAnimalAge;
    cin >> newAnimalAge;
    ani2.setAnimalAge(newAnimalAge);
    cout << "Новый объем: " << ani2.getAnimalAge() << endl;
    cout << "" << endl;

    Animal ani3("Пеструша", "Кошка", "Черно-рыжий");
    ani2.displayAnimal();
    ani2.Feed();
    ani2.NameChange();

    Animal* ani4 = new Animal("Араклапежус", "Кот");
    ani4->displayAnimal();
    ani4->Feed();
    ani4->NameChange();

    delete ani1;
    delete ani4;
    return 0;
}