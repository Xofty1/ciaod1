#ifndef MAIN_H
#define MAIN_H
#include <iostream>
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
	char Surname;//������� ���������
	int phone_number;//����� ��������
	char products_list;//������ �������
};

void add(product p)
	{
		
	}
product input_product(/*char name, int code, int quantity, int cost*/product p1)
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



#endif