#include <iostream>
using namespace std;

// Задача 1. Структура Human. 
// 1. Создайте структуру для хранения информации о человеке.
// Структура должна содержать минимум 5 полей: имя, фамилия, возраст, вес, рост.
// 2. Создайте 3 статических объекта структуры и проинициализируйте их поля разыми способами: 
// инициализацией каждого поля отдельно, списком инициализации и универсальной инициализацией. 
// Еще один объект создайте в динамической области и проинициализируйте его поля. 
// Всего должно получиться 4 объекта (экземпляра) структуры. Выведите данные в консоль.
// 3. Добавьте минимум 3 функции для работы со структурой Human (вне структуры): 
// подсчет индекса массы тела (ИМТ = (вес/2.205)/(рост/39.37)2), вычисление года рождения по возрасту, 
// вывод данных структуры в консоль. Вызовите данные функции для каждого экземпляра структуры.
// 4. Созданные функции определите как методы структуры Human.Вызовите данные методы для каждого экземпляра структуры.

struct Human {
    const char* humanFirstName;
    const char* humanLastName;
    int humanAge;
    float humanWeight;
    float humanHeight;

    double BMI() {
        double weight = humanWeight;
        double height = humanHeight;
        cout << "Body mass index: " << (weight / 2.205) / ((height / 39.37) * 2) << endl;
        return (weight / 2.205) / ((height / 39.37) * 2);
    }

    int BirthYear() {
        int currentYear = 2024;
        cout << "BirthYear: " << currentYear - humanAge << endl;
        return currentYear - humanAge;
    }

    void displayHuman() {
        setlocale(LC_ALL, "");
        cout << "Имя: " << humanFirstName << endl;
        cout << "Фамилия: " << humanLastName << endl;
        cout << "Возраст: " << humanAge << " лет" << endl;
        cout << "Вес: " << humanWeight << " кг" << endl;
        cout << "Рост: " << humanHeight << " см" << endl;
        cout << "" << endl;
    }

};


int main()
{
    Human* hum1 = new Human;
    hum1->humanFirstName = "Зоя";
    hum1->humanLastName = "Никифорова";
    hum1->humanAge = 17;
    hum1->humanWeight = 65.5;
    hum1->humanHeight = 175;
    hum1->BirthYear();
    hum1->BMI();
    hum1->displayHuman();

    Human hum2{ "Фёдор", "Достоевский", 65, 96.6, 165 };
    hum2.BirthYear();
    hum2.BMI();
    hum2.displayHuman();

    Human hum3 = { "Александр", "Пушкин", 30, 60.6, 155 };
    hum3.BirthYear();
    hum3.BMI();
    hum3.displayHuman();

    Human hum4;
    hum4.humanFirstName = "Лев";
    hum4.humanLastName = "Толстой";
    hum4.humanAge = 80;
    hum4.humanWeight = 80.8;
    hum4.humanHeight = 180;
    hum4.BirthYear();
    hum4.BMI();
    hum4.displayHuman();

    delete hum1;
    return 0;
}

// Задача 2. Структура Car
// 1. Создайте структуру для хранения информации об автомобиле.
// Структура должна содержать минимум 5 полей: марка, цвет, тип кузова, объем двигателя, пробег.
// 2. Создайте 3 статических объекта структуры и проинициализируйте их поля разыми способами : 
// инициализацией каждого поля отдельно, списком инициализации и универсальной инициализацией.
// Еще один объект создайте в динамической области и проинициализируйте его поля.
// Всего должно получиться 4 объекта(экземпляра) структуры.Выведите данные в консоль.
// 3. Добавьте минимум 3 функции для работы со структурой Car(вне структуры) : 
// подсчет среднего расхода топлива на 100 км(объем двигателя / пройденное расстояние * 100), 
// уменьшение пробега, вывод данных структуры в консоль.
// Вызовите данные функции для каждого экземпляра структуры.
// 4. Созданные функции определите как методы структуры Car.
// Вызовите данные методы для каждого экземпляра структуры.


//struct Car {
//    const char* carMark;
//    const char* carColor;
//    const char* carType;
//    float carEC; // engine capacity
//    float carMileage;
//
//    double Fuel() {
//        double EC = carEC;
//        double M = carMileage;
//        cout << "Average fuel consumption: " << (EC / (M * 0,1)) << endl;
//        return (EC / (M * 100));
//    }
//
//    void MileageChange() {
//        int answer;
//        int newMileage;
//        cout << "Хотите изменить пробег? 1 - да, 2 - нет: ";
//        cin >> answer;
//        if (answer == 1) {
//            cout << "Введите новый пробег: ";
//            cin >> newMileage;
//            cout << "Вписали" << endl;
//            cout << "" << endl;
//        }
//        if (answer == 2) {
//            cout << "Оставляем как есть" << endl;
//            cout << "" << endl;
//        }
//       
//    }
//
//    void displayCar() {
//        setlocale(LC_ALL, "");
//        cout << "Марка: " << carMark << endl;
//        cout << "Цвет: " << carColor << endl;
//        cout << "Тип кузова: " << carType << endl;
//        cout << "Объем двигателя: " << carEC << endl;
//        cout << "Пробег: " << carMileage << endl;
//    }
//
//};
//
//
//int main()
//{
//    Car* car1 = new Car;
//    car1->carMark = "Мерседес";
//    car1->carColor = "Черный";
//    car1->carType = "Кроссовер";
//    car1->carEC = 5;
//    car1->carMileage = 50000;
//    car1->displayCar();
//    car1->Fuel();
//    car1->MileageChange();
//
//    Car car2{ "БМВ", "Белый", "Универсал", 4, 40000 };
//    car2.displayCar();
//    car2.Fuel();
//    car2.MileageChange();
//
//    Car car3 = { "Порш", "Пурпурный", "Купе", 3, 30000 };
//    car3.displayCar();
//    car3.Fuel();
//    car3.MileageChange();
//
//    Car car4;
//    car4.carMark = "Ауди";
//    car4.carColor = "Аквамарин";
//    car4.carType = "Фастбэк";
//    car4.carEC = 5;
//    car4.carMileage = 50000;
//    car4.displayCar();
//    car4.Fuel();
//    car4.MileageChange();
//
//    delete car1;
//    return 0;
//}

// Задача 3. Структура Animal.
// 1. Создайте структуру для хранения информации о животных.
// Структура должна содержать минимум 5 полей: имя, вид, окрас, возраст, вес.
// 2. Создайте 3 статических объекта структуры и проинициализируйте их поля разыми способами : 
// инициализацией каждого поля отдельно, списком инициализации и универсальной инициализацией.
// Еще один объект создайте в динамической области и проинициализируйте его поля.
// Всего должно получиться 4 объекта(экземпляра) структуры.Выведите данные в консоль.
// 3. Добавьте минимум 3 функции для работы со структурой Animal(вне структуры) : 
// увеличение веса на 0, 01 за каждый день кормежки(вес * 0, 01 * кол - во дней кормежки), 
// смена имени, вывод данных структуры в консоль.Вызовите данные функции для каждого экземпляра структуры.
// 4. Созданные функции определите как методы структуры Animal.
// Вызовите данные методы для каждого экземпляра структуры.

/*struct Animal {
    const char* animalName;
    const char* animalType;
    const char* animalColor;
    int animalAge;
    float animalWeight;

    double Feed() {
        double weight = animalWeight;
        int days;
        cout << "Сколько дней кормим: ";
        cin >> days;
        double newWeight = weight;
        for (int i = 0; i < days; ++i)
        {
            newWeight += 0.01;
        }
        cout << "Новый вес: " << newWeight << endl;
        return newWeight;
        
    }

    void NameChange(){
        int answer;
        string newName;
        cout << "Хотите сменить имя? 1 - да, 2 - нет: ";
        cin >> answer;
        if (answer == 1) {
            cout << "Введите новое имя: ";
            cin >> newName;
            cout << "Вписали" << endl;
            cout << "" << endl;
        }
        if (answer == 2) {
            cout << "Оставляем как есть" << endl;
            cout << "" << endl;  
        }
        
    }

    void displayAnimal() {
        setlocale(LC_ALL, "");
        cout << "Имя: " << animalName << endl;
        cout << "Вид: " << animalType << endl;
        cout << "Окрас: " << animalColor << endl;
        cout << "Возраст: " << animalAge << endl;
        cout << "Вес: " << animalWeight << endl;
    }

};


int main()
{
    Animal* ani1 = new Animal;
    ani1->animalName = "Хьюша";
    ani1->animalType = "Кот";
    ani1->animalColor = "Черный";
    ani1->animalAge = 5;
    ani1->animalWeight = 3;
    ani1->displayAnimal();
    ani1->Feed();
    ani1->NameChange();

    Animal ani2{ "Палыч", "Кот", "Черный", 4, 4};
    ani2.displayAnimal();
    ani2.Feed();
    ani2.NameChange();

    Animal ani3 = { "Пеструша", "Кошка", "Черно-рыжий", 2, 3};
    ani3.displayAnimal();
    ani3.Feed();
    ani3.NameChange();

    Animal ani4;
    ani4.animalName = "Ароклапежус";
    ani4.animalType = "Кот";
    ani4.animalColor = "Бело-серый";
    ani4.animalAge = 1;
    ani4.animalWeight = 3;
    ani4.displayAnimal();
    ani4.Feed();
    ani4.NameChange();

    delete ani1;
    return 0;
}*/