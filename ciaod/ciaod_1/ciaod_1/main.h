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
	string Surname;//������� ���������
	int phone_number;//����� ��������
	string products_list;//������ �������
};

int addProduct(product products[100], product p, int numberOfProducts)
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

void print(product p[100], int d)
{
	for (int i = 0; i < d; i++)
	{
		cout << i + 1 <<')' << '\t' << p[i].name << '\t' << p[i].code << '\t' << p[i].quantity << '\t' << p[i].cost << endl;
	}
	
}

//void addOrder()

#endif