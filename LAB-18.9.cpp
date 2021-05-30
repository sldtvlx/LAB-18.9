/*	
Класс контейнер Vector с элементами типа int
Реализовать операции: доступа по индексу, определение размера вектора, пересечение множеств, удаление элемента и множества
*/

#include <iostream>
#include "MNOG.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int s = -1, in, menu = 4;
	while (s <= 0)
	{
		cout << "Введи количество элементов множества: "; cin >> s;
	}


	Vector a(s);
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5)
	{

		cout << endl << endl << "Меню: \n\t1. Получить элемент по индексу \n\t2. Получить размер множества \n\t3. Получить пересечения множества \n\t4. Удалить элемент по индексу\n\t5. Вывести множество \n\n\t0. Выход";
		cout << endl << "Выбери пункт меню: "; cin >> menu;
		if (menu == 1)
		{
			cout << "Введи индекс элемента, который хочешь получить: "; cin >> in;
			try
			{
				cout << "Искомый элемент: " << a.give(in);
			}
			catch (const int in)
			{
				cout << "Ошибка ввода";
			}
		}

		if (menu == 2)
			cout << "Размер = " << a.givesize();

		if (menu == 3)
			a.cross();

		if (menu == 4)
		{
			cout << "Введи индекс элемента: "; cin >> in;
			try
			{
				a.del(in);
				cout << "Элемент удален " << endl;
			}
			catch (const int e)
			{
				cout << "Ошибка ввода";
			}

		}

		if (menu == 5)
		{
			a.print();
		}

		if (menu == 0)
		{
			a.end();
			break;
		}
	}
}