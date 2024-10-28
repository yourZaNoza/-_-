#include <iostream>
#include "Car.h"
using namespace std;

void Car::initCar(const char* mark, const char* color, const char* type, float ec, float m) {
    carMark = mark;
    carColor = color;
    carType = type;
    carEC = ec; // engine capacity
    carMileage = m;
}

double Car::Fuel() {
    double EC = carEC;
    double M = carMileage;
    cout << "Average fuel consumption: " << (EC / (M * 0, 1)) << endl;
    return (EC / (M * 100));
}

void Car::MileageChange() {
    int answer;
    int newMileage;
    cout << "Хотите изменить пробег? 1 - да, 2 - нет: ";
    cin >> answer;
    if (answer == 1) {
        cout << "Введите новый пробег: ";
        cin >> newMileage;
        cout << "Вписали" << endl;
        cout << "" << endl;
    }
    if (answer == 2) {
        cout << "Оставляем как есть" << endl;
        cout << "" << endl;
    }

}

void Car::displayCar() {
    setlocale(LC_ALL, "");
    cout << "Марка: " << carMark << endl;
    cout << "Цвет: " << carColor << endl;
    cout << "Тип кузова: " << carType << endl;
    cout << "Объем двигателя: " << carEC << endl;
    cout << "Пробег: " << carMileage << endl;
}