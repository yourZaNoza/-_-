#pragma once
#include <iostream>
#include "Age.h"
using namespace age;

class Car {
private:
    const char* carMark;
    const char* carColor;
    const char* carType;
    float carEC; // engine capacity
    float carMileage;
public:
    // конструкторы
    Car() = default;
    Car(const char* mark, const char* color, const char* type, float ec, float m);
    Car(const char* mark, const char* color, const char* type, float ec);
    Car(const char* mark, const char* color, const char* type);
    Car(const char* mark, const char* color);
    Car(const char* mark);

    // деструктор
    ~Car();

    // перегруженные операторы
    Car operator++();
    Car operator--();
    bool operator< (Car other);
    bool operator> (Car other);
    friend std::ostream& operator<< (std::ostream& output, Car c);

    // геттеры и сеттеры
    void setCarMark(const char* mark);
    const char* getCarMark();
    void setCarColor(const char* color);
    const char* getCarColor();
    void setCarType(const char* type);
    const char* getCarType();
    void setCarEC(float ec);
    float getCarEC();
    void setCarMileage(float m);
    float getCarMileage();

    // метод
    void displayCar();
};