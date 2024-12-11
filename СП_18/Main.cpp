#include <iostream>
#include "IAnimal.h"
#include "House.h"
#include "Wild.h"
using namespace std;

// СП _ 18 _ Класс Animal 
// Обозначьте родительский класс абстрактным. 
// Отредактируйте классы, исходя из логики их работы.
// Напишите программу, которая в цикле запрашивает, 
// о каком объекте вывести информацию, включая полную информацию о всех объектах.

int main() {
	House ani1("Hugh", "Cat", "Black", animalAge::Hugh, 3.0, "House");
	Wild* ani2 = new Wild("Lev", "Lion", "Orange", 8, 80.8, "Savannah");
	House ani3("Paul", "Cat", "Ginger", animalAge::Paul, 5.0, "House");
	Wild* ani4 = new Wild("Kesha", "Parrot", "Multi-color", 2, 0.8, "Savannah");
	IAnimal** arr = new IAnimal * [4] {&ani1, ani2, & ani3, ani4};
	/*for (int i = 0; i < 4; ++i)
	{
		arr[i]->display();
	}*/
	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		std::cout
			<< "Choose option: 1 = Cat, 2 = Lion, 3 = Cat, 4 = Parrot, 0 = exit"
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
}
