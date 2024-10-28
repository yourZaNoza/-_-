#pragma once
class Car {
private:
    const char* carMark;
    const char* carColor;
    const char* carType;
    float carEC; // engine capacity
    float carMileage;
public:
    double Fuel();
    void MileageChange();
    void initCar(const char* mark, const char* color, const char* type, float ec, float m);
    void displayCar();
};