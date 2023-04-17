#include <iostream>
#include <string>
#include <Windows.h>
#include "main.h"


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int MAX_PRODUCTS = 100;
	setlocale(LC_ALL, "RUS");
	int operation;
	int numberOfProducts = 0;
	product products[MAX_PRODUCTS];
	cout << "1. ќпределить стоимость покупки по заказу" << '\n' << "2. ƒобавить в список заказа новый товар" << '\n' << "3. ƒобавить новый заказ в список заказов супермаркета" << '\n' << "4. ”далить заказ с заданным номером из списка заказов супермаркета" << endl;
	cin >> operation;

	if (operation == 1)
	{
		product new_product{};
		new_product = input_product(new_product);
		numberOfProducts = addProduct
		(products, new_product, numberOfProducts);
		print(products, numberOfProducts);
	}
	

	



	return 0;
}
