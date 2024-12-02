#include <iostream>
#include "IAnimal.h"
#include "House.h"
#include "Wild.h"
#include "Street.h"
using namespace std;

// �� _ 18 _ ����� Animal 
// ���������� ������������ ����� �����������. 
// �������������� ������, ������ �� ������ �� ������.
// �������� ���������, ������� � ����� �����������, 
// � ����� ������� ������� ����������, ������� ������ ���������� � ���� ��������.

/*int main() {
    House ani1("Hugh", "Cat", "Black", animalAge::Hugh, 3.0, "House");
    Wild* ani2 = new Wild("Lev", "Lion", "Orange", 8, 80.8, "Savannah");
    House ani3("Paul", "Cat", "Ginger", animalAge::Paul, 5.0, "House");
    Wild* ani4 = new Wild("Kesha", "Parrot", "Multi-color", 2, 0.8, "Savannah");

    IAnimal** arr = new IAnimal * [4] {&ani1, ani2, &ani3, ani4};
    for (int i = 0; i < 4; ++i)
    {
        arr[i]->display();
    }

	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		std::cout
			<< "�������� ��������: 1 = Cat, 2 = Lion, 3 = Cat, 4 = Parrot, 5 = ������� ���, 0 = ����� �� ���������"
			<< std::endl;

		char choice;
		std::cin >> choice;
		switch (choice)
		{
		case '1':
			arr[0]->display();
			break;
		case '2':
			arr[1]->display();
			break;
		case '3':
			arr[2]->display();
			break;
		case '4':
			arr[3]->display();
			break;
		case '5':
			
			break;
		case '0':
			start = false;
			break;
		default:
			break;
		}
	} while (start);

    delete ani2;
    delete ani4;
    delete[] arr;
    return 0;
}*/

// �� _ 19 _ ����� Animal
// �������������� ����������� ������������� ��� ������� �������� � ����� ��������.
// �������� �����, ����������� � �� ��������, � �� ����� �������� � ������� ��������.
// �������� � ���� ��� ������� 1 ����� ����.�������� ����������� ������������ � ������� / �������.
// �������������� ����������� ������. �������������� ������, ������ �� ������ �� ������.
// �������� ����� ��� ���������� ������ � ������� � ���� ������� �������. �������� ����� ��� ������ � ���� ������ ��������.
// �������� ���������, ������� � ����� �����������, � ����� ������� ������ ����������, 
// � ����� ������� ������ � ����������� ��� ���� ��������.

int main() {
	House* ani1 = new House;
	Wild* ani2 = new Wild;
	House* ani3 = new House;
	Wild* ani4 = new Wild;
	Street* ani5 = new Street;

	IAnimal** arr = new IAnimal * [5] {ani1, ani2, ani3, ani4, ani5};

	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		std::cout
			<< "�������� ��������: " << std::endl
			<< "1 - ��������" << std::endl << "2 - �����" << std::endl
			<< "3 - ��������" << std::endl << "4 - �����" << std::endl
			<< "5 - �������" << std::endl << "0 - �����" << std::endl;

		char choice;
		std::cin >> choice;
		switch (choice)
		{
		case '1':
			arr[0]->readFromConsole();
			break;
		case '2':
			arr[1]->readFromConsole();
			break;
		case '3':
			arr[2]->readFromConsole();
			break;
		case '4':
			arr[3]->readFromConsole();
			break;
		case '5':
			arr[4]->readFromConsole();
			break;
		case '0':
			for (int i = 0; i < 5; ++i)
			{
				arr[i]->display();
			}
			start = false;
			break;
		default:
			break;
		}
	} while (start);

	/*std::ofstream out("Animal.txt", std::ios::out | std::ios::trunc);
	out.close();

	for (int i = 0; i < 5; ++i)
	{
		arr[i]->writeToFile();
		std::cout << "��� \"" << arr[i]->getAnimalName() << "\" ������� �������� � ����." << std::endl;
	}*/

	delete ani1;
	delete ani2;
	delete ani3;
	delete ani4;
	delete ani5;
	delete[] arr;

	return 0;
}