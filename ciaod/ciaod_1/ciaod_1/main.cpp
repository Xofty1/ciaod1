#include <iostream>
#include <string>
#include "main.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int operation;
	cout << "1. ���������� ��������� ������� �� ������" << '\n' << "2. �������� � ������ ������ ����� �����" << '\n' << "3. �������� ����� ����� � ������ ������� ������������" << '\n' << "4. ������� ����� � �������� ������� �� ������ ������� ������������" << endl;
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
