#pragma once
class Animal {
private:
    const char* animalName;
    const char* animalType;
    const char* animalColor;
    int animalAge;
    float animalWeight;
public:
    // конструкторы
    Animal() = default;
    Animal(const char* name, const char* type, const char* color, int age, float weight);
    Animal(const char* name, const char* type, const char* color, int age);
    Animal(const char* name, const char* type, const char* color);
    Animal(const char* name, const char* type);
    Animal(const char* name);

    // деструктор
    ~Animal();

    // геттеры и сеттеры
    void setAnimalName(const char* name);
    const char* getAnimalName();
    void setAnimalType(const char* type);
    const char* getAnimalType();
    void setAnimalColor(const char* color);
    const char* getAnimalColor();
    void setAnimalAge(int age);
    int getAnimalAge();
    void setAnimalWeight(float weight);
    float getAnimalWeight();

    // методы
    double Feed();
    void NameChange();
    void displayAnimal();
};