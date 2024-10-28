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
    cout << "������ �������� ������? 1 - ��, 2 - ���: ";
    cin >> answer;
    if (answer == 1) {
        cout << "������� ����� ������: ";
        cin >> newMileage;
        cout << "�������" << endl;
        cout << "" << endl;
    }
    if (answer == 2) {
        cout << "��������� ��� ����" << endl;
        cout << "" << endl;
    }

}

void Car::displayCar() {
    setlocale(LC_ALL, "");
    cout << "�����: " << carMark << endl;
    cout << "����: " << carColor << endl;
    cout << "��� ������: " << carType << endl;
    cout << "����� ���������: " << carEC << endl;
    cout << "������: " << carMileage << endl;
}