#ifndef MAIN_H
#define MAIN_H
#include <iostream>
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
	char Surname;//фамили€ заказчика
	int phone_number;//номер телефона
	char products_list;//список товаров
};

void add(product p)
	{
		
	}
product input_product(/*char name, int code, int quantity, int cost*/product p1)
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



#endif