#include <iostream>
using namespace std;

void Exchange(int& a, int& b)//��� � ������ ���� ���������� ������� ������������ ���������� 
{
	int buffer = a;
	a = b;
	b = buffer;
}


void main()
{
	setlocale(LC_ALL, "");
	int a = 9;
	int b = 5;
	int& ra = a;
	int& rb = b;
	cout << "� = " << a << endl;
	cout << "� = " << b << "\n\n";
	cout << "������ ���������� � - " << &a << "\n";
	cout << "������ ������ � ���������� � - " << &ra << "\n\n";
	ra += 3;
	cout << "������ � ����� = " << a << "\n\n";
	cout << a << "\t" << b << "\n\n";
	Exchange(ra, rb);
	cout << a << "\t" << b << endl;
}