#include <iostream>
#include "Car.h"
using namespace std;

// ����������
Car::~Car() {}

// ������������� ��������� 
Car Car::operator++() {
    ++carEC;
    return *this;
}

Car Car::operator--() {
    if (carEC > 0)
    {
        --carEC;
        return *this;
    }
    else cout << "����� ������ 1!" << endl;
}

bool Car::operator< (Car other) {
    return this->carEC < other.carEC;
}

bool Car::operator> (Car other) {
    return this->carEC > other.carEC;
}

ostream& operator<< (ostream& output, Car c) {
    setlocale(LC_ALL, "");
    output << "�����: " << c.carMark << endl
        << "����: " << c.carColor << endl
        << "��� ������: " << c.carType << endl
        << "����� ���������: " << c.carEC << endl
        << "������: " << c.carMileage << endl
        << "\n";
    return output;
}

// ������������ 
Car::Car(const char* mark, const char* color, const char* type, float ec, float m)
{
    this->carMark = mark;
    this->carColor = color;
    this->carType = type;
    this->carEC = ec;
    this->carMileage = m;
}

Car::Car(const char* mark, const char* color, const char* type, float ec)
{
    this->carMark = mark;
    this->carColor = color;
    this->carType = type;
    this->carEC = ec;
}

Car::Car(const char* mark, const char* color, const char* type)
{
    this->carMark = mark;
    this->carColor = color;
    this->carType = type;
}

Car::Car(const char* mark, const char* color)
{
    this->carMark = mark;
    this->carColor = color;
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

// �����

void Car::displayCar() {
    setlocale(LC_ALL, "");
    cout << "�����: " << carMark << endl;
    cout << "����: " << carColor << endl;
    cout << "��� ������: " << carType << endl;
    cout << "����� ���������: " << carEC << endl;
    cout << "������: " << carMileage << endl;
}