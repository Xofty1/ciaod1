#include <iostream>
#include <string>
#include <Windows.h>
#include "main.h"


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");

	const int MAX_PRODUCTS =256;
	const int MAX_ORDER = 256;
	int operation=0;
	int numberOfProducts = 0;
	int numberOfOrder = 0;
	product products[MAX_PRODUCTS];
	order orders[MAX_ORDER];

	cout << "1. ќпределить стоимость покупки по заказу" << '\n' << "2. ƒобавить в список заказа новый товар" << '\n' << "3. ƒобавить новый заказ в список заказов супермаркета" << '\n' << "4. ”далить заказ с заданным номером из списка заказов супермаркета\n" << "5. ¬ывести список продуктов заказа по номеру"<< endl;

	while (operation != 6)
	{
		cin >> operation;
		if (operation == 1)
		{
			int order_num;
			cout << "¬ведите номер заказа, цену которого вы хотите узнать: ";
			cin >> order_num;
			cost_of_order(orders, order_num, numberOfOrder);
		}
		if (operation == 2)
		{

			int order_num;
			cout << "¬ведите номер заказа, в который вы хотите добавить товар: ";
			cin >> order_num;
			addProdInOrder(order_num, orders, numberOfOrder);
		}
		if (operation == 3)
		{
			order new_order{};
			new_order = input_order(new_order, products);
			numberOfOrder = addOrder(orders, new_order, numberOfOrder);
			printOrder(orders, numberOfOrder);
		}
		if (operation == 4)
		{
			int order_num;
			cout << "¬ведите номер заказа, который вы хотите убрать: ";
			cin >> order_num;
			numberOfOrder = DeleteOrder(orders, order_num, numberOfOrder);
			printOrder(orders, numberOfOrder);
		}
		if (operation == 5) //узнать продукты в заказе
		{
			int order_num;
			cout << "¬ведите номер заказа, в котором вы хотите посмотреть продукты: ";
			cin >> order_num;
			printProduct(numberOfOrder, orders, order_num);
		}

	}
	
	return 0;
}
