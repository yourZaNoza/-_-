#include <iostream>
#include <fstream>
#include "Street.h"
using namespace std;

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
			<< "5 - �������" << std::endl << "0 - �����\n" << std::endl;

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
};