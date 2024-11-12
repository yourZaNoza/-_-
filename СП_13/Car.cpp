#include <iostream>
#include "Car.h"
using namespace std;

// ����������
Car::~Car()
{
    cout << "~destr for " << carMark << endl;
}

// ������������ 
Car::Car(const char* mark, const char* color, const char* type, float ec, float m)
{
    this->carMark = mark;
    this->carColor = color;
    this->carType = type;
    this->carEC = ec;
    this->carMileage = m;
    cout << "constr for " << carMark << endl;
}

Car::Car(const char* mark, const char* color, const char* type, float ec)
{
    this->carMark = mark;
    this->carColor = color;
    this->carType = type;
    this->carEC = ec;
    cout << "constr for " << carMark << endl;
}

Car::Car(const char* mark, const char* color, const char* type)
{
    this->carMark = mark;
    this->carColor = color;
    this->carType = type;
    cout << "constr for " << carMark << endl;
}

Car::Car(const char* mark, const char* color)
{
    this->carMark = mark;
    this->carColor = color;
    cout << "constr for " << carMark << endl;
}

Car::Car(const char* mark)
{
    this->carMark = mark;
    cout << "constr for " << carMark << endl;
}

// ������� � �������
void Car::setCarMark(const char* mark) {
    this->carMark = mark;
}
const char* Car::getCarMark() {
    return carMark;
}
void Car::setCarColor(const char* color) {
    this->carColor = color;
}
const char* Car::getCarColor() {
    return carColor;
}
void Car::setCarType(const char* type) {
    this->carType = type;
}
const char* Car::getCarType() {
    return carType;

}
void Car::setCarEC(float ec) {
    this->carEC = ec;

}
float Car::getCarEC() {
    return carEC;
}
void Car::setCarMileage(float m) {
    this->carMileage = m;
}

float Car::getCarMileage() {
    return carMileage;
}

// ������
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