#include <iostream>
using namespace std;

void fill(int arr[],int n);//���� ��������� � ���������	 
void print(int* arr, int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ���������� ��������� �������: "; cin >> n;
	cout << endl;
	int* arr = new int[n];
	fill(arr, n);
	print(arr, n);
	delete[] arr;
}


void fill(int arr[], int n)
{
	for (int i = 0; i < n; i++)//����� �������� * � ���������
	{
		*(arr + i) = rand()%100;
	}
}
void print(int* arr, int n)
{
	for (int i = 0; i < n; i++)//����� ����������� �������� �������������� � for
	{
		cout << arr[i] << endl;
	}
}