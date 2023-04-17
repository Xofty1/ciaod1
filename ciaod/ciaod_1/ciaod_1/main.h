#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct product // товар
{
	char name[256]; // название
	int code; //артикул
	int quantity;//количество
	int cost; //цена
};

struct order // заказ
{
	int order_number;// номер заказа
	int day;//день
	int month;//мес€ц
	int year;//год
	string Surname;//фамили€ заказчика
	int phone_number;//номер телефона
	string products_list;//список товаров
};

int addProduct(product products[100], product p, int numberOfProducts)
	{
	products[numberOfProducts] = p;
	numberOfProducts += 1;
	return numberOfProducts;

	}
product input_product(product p1)
{
	cout << "¬ведите название продукта: ";
	cin >> p1.name;

	cout << "¬ведите артикул продукта: ";
	cin >>p1.code;

	cout << "¬ведите количество продукта: ";
	cin >> p1.quantity;

	cout << "¬ведите цену продукта: ";
	cin >> p1.cost;
	return p1;
}

void print(product p[100], int d)
{
	for (int i = 0; i < d; i++)
	{
		cout << i + 1 <<')' << '\t' << p[i].name << '\t' << p[i].code << '\t' << p[i].quantity << '\t' << p[i].cost << endl;
	}
	
}

//void addOrder()

#endif