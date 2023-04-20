#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct product // �����
{
	char name[256]; // ��������
	int code; //�������
	int quantity;//����������
	int cost; //����
};

struct order // �����
{
	int order_number;// ����� ������
	int day;//����
	int month;//�����
	int year;//���
	char Surname[100];//������� ���������
	int phone_number;//����� ��������
	product *products_list = new product[256];//������ �������
	int quantity_of_products=0;
	int sum = 0;
	
};

int addProduct(product products[256], product p, int numberOfProducts)
	{
	products[numberOfProducts] = p;
	numberOfProducts += 1;
	return numberOfProducts;
	}

product input_product(product p1)
{
	cout << "������� �������� ��������: ";
	cin >> p1.name;

	cout << "������� ������� ��������: ";
	cin >>p1.code;

	cout << "������� ���������� ��������: ";
	cin >> p1.quantity;

	cout << "������� ���� ��������: ";
	cin >> p1.cost;
	return p1;
}

order input_order(order p1, product p[256])
{
	cout << "������� ����� ������: ";
	cin >> p1.order_number;

	cout << "������� ����: ";
	cin >> p1.day;

	cout << "������� �����: ";
	cin >> p1.month;

	cout << "������� ���: ";
	cin >> p1.year;

	cout << "������� ������� ���������: ";
	cin >> p1.Surname;

	cout << "������� ����� ��������: ";
	cin >> p1.phone_number;
	
	return p1;
}

void printProduct(int d, order orders[256], int num_ord)
{
	int flag = 0;
	for (int g = 0; g < d; g++)
	{
		if (num_ord == orders[g].order_number)
		{
			flag = 1;
			for (int i = 0; i < orders[g].quantity_of_products; i++)
			{
				cout << i + 1 << ')' << '\t' << (orders+g)->products_list[i].name << '\t' << orders[g].products_list[i].code << '\t' << orders[g].products_list[i].quantity << '\t' << orders[g].products_list[i].cost << endl;
			}
			break;
		}
	}
	if (flag == 0)
	{
		cout << "������ ������ �� ����������" << endl;
	}
}

int addOrder(order orders[256], order p, int numberOfOrder)
{
	orders[numberOfOrder] = p;
	numberOfOrder += 1;
	return numberOfOrder;
}

void printOrder(order p[256], int d)
{
	for (int i = 0; i < d; i++)
	{
		cout << i + 1 << ")  " << "����� ������ : " << p[i].order_number << '\t' << "���� : " << p[i].day << '\t' << "����� : " << p[i].month << '\t' << "��� : "  << p[i].year << '\t' << "������� ��������� : " << p[i].Surname << '\t' << "����� �������� : "  << p[i].phone_number << '\t' <<"��������� : "  << p[i].sum << endl;
	}
}

void addProdInOrder(int ord, order orders[256], int d) // d - ������� ��������� � ������, ���� ������� �������� � ����� �� ������ ����� �������
{
	int flag = 0;
	for (int i = 0; i<d; i++)
	{
		if (ord == orders[i].order_number)
		{
			product new_product{};
			new_product = input_product(new_product);
			orders[i].products_list[orders[i].quantity_of_products] = new_product;
			orders[i].quantity_of_products += 1;
			flag = 1;
			orders[i].sum += new_product.cost;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "������ ������ �� ����������\n";
	}
}

int DeleteOrder(order orders[256], int num_ord, int d)
{
	int flag = 0;
	for (int i = 0; i < d; i++)
	{
		if (num_ord == orders[i].order_number)
		{
			for (int j = i; j < d-1; j++)
			{
				orders[j] = orders[j + 1];
			}
			flag = 1;
			return d - 1;
		}
	}
	if (flag == 0)
	{
		cout << "������ ������ �� ����������\n";
		return d;
	}
}

void cost_of_order(order orders[256], int num_ord, int d)
{
	for (int i = 0; i < d; i++)
	{
		if (num_ord == orders[i].order_number)
		{
			cout << "���� ������� ������: " << orders[i].sum << endl;
		}
	}
}
#endif