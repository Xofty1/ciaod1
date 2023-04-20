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

	cout << "1. ���������� ��������� ������� �� ������" << '\n' << "2. �������� � ������ ������ ����� �����" << '\n' << "3. �������� ����� ����� � ������ ������� ������������" << '\n' << "4. ������� ����� � �������� ������� �� ������ ������� ������������\n" << "5. ������� ������ ��������� ������ �� ������"<< endl;

	while (operation != 6)
	{
		cin >> operation;
		if (operation == 1)
		{
			int order_num;
			cout << "������� ����� ������, ���� �������� �� ������ ������: ";
			cin >> order_num;
			cost_of_order(orders, order_num, numberOfOrder);
		}
		if (operation == 2)
		{

			int order_num;
			cout << "������� ����� ������, � ������� �� ������ �������� �����: ";
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
			cout << "������� ����� ������, ������� �� ������ ������: ";
			cin >> order_num;
			numberOfOrder = DeleteOrder(orders, order_num, numberOfOrder);
			printOrder(orders, numberOfOrder);
		}
		if (operation == 5) //������ �������� � ������
		{
			int order_num;
			cout << "������� ����� ������, � ������� �� ������ ���������� ��������: ";
			cin >> order_num;
			printProduct(numberOfOrder, orders, order_num);
		}

	}
	
	return 0;
}
