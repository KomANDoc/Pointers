#include <iostream>
using namespace std;

//#define POINTERS_BASICS
void main()
{
	setlocale(LC_ALL, "RU");

#ifdef POINTERS_BASICS
	int a = rand() - rand() * rand() + rand() + (rand() * rand()); // ���������� ����������
	int* pa = &a; // ���������� ���������
	cout << a << endl;// ����� ���������� 
	cout << &a << endl;// ����� ������� ���������� "�", ��� ������
	cout << pa << endl;// ����� ������� ���������� "�", ����������� � ��������� "pa"
	cout << *pa << endl;// �������������� ���������, � ���������� �������� �� �������
	int* pb;
	int b = 30;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
#endif

	const int n = 5;
	int arr[n] = {1,2,3,4,5};
	int* parr;
	cout << arr << endl << "\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
		parr = &arr[i];
		cout << parr << endl;
	}
	cout << "\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << endl;
		cout << arr + i << endl;
	}
}