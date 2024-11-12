#pragma once
class Car {
private:
    const char* carMark;
    const char* carColor;
    const char* carType;
    float carEC; // engine capacity
    float carMileage;
public:
    // ������������
    Car() = default;
    Car(const char* mark, const char* color, const char* type, float ec, float m);
    Car(const char* mark, const char* color, const char* type, float ec);
    Car(const char* mark, const char* color, const char* type);
    Car(const char* mark, const char* color);
    Car(const char* mark);

    // ����������
    ~Car();

    // ������� � �������
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

    // ������
    double Fuel();
    void MileageChange();
    void displayCar();
};