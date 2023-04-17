#include <iostream>
#include <string>
#include "main.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int operation;
	cout << "1. ќпределить стоимость покупки по заказу" << '\n' << "2. ƒобавить в список заказа новый товар" << '\n' << "3. ƒобавить новый заказ в список заказов супермаркета" << '\n' << "4. ”далить заказ с заданным номером из списка заказов супермаркета" << endl;
	product new_product{};
	cin >> operation;
	if (operation == 1)
	{
		product new_product{};
		new_product = input_product(new_product);
	}
	

	
	cout << new_product.cost;



	return 0;
}
