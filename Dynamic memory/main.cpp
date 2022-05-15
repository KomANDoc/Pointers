#include <iostream>
using namespace std;

void fill(int arr[],int size);
void print(int* arr, int* size);
void push_back(int* arr, int* size);
void push_front(int* arr, int* size);
void insert(int* arr, int* size, int index);


void main()
{
	setlocale(LC_ALL, "");
	int size, index;
	cout << "������� ������ �������: "; cin >> size;
	int* arr = new int[size];

	fill(arr, size);
	print(arr, &size);

	cout << "\n\n\n";
	
	push_back(arr, &size);
	print(arr, &size);

	cout << "\n\n\n";

	push_front(arr, &size);
	print(arr, &size);

	cout << "\n\n\n";

	cout << "������� ������ ���� �������� �������: "; cin >> index;
	cout << "\n";
	insert(arr, &size, index);
	print(arr, &size);

	cout << "\n\n\n";

	delete[] arr;
}


void fill(int arr[], int size)
{
	for (int i = 0; i < size; i++)//����� �������� * � ���������
	{
		*(arr + i) = rand()%100;
	}
}

void print(int* arr, int* size)
{
	for (int i = 0; i < *size; i++)//����� ����������� �������� �������������� � for
	{
		cout << arr[i] << endl;
	}
}

void push_back(int* arr, int* size)//��������� �������� � ����� ������������� �������
{
	*size += 1;
	int* arrBuf = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		if (i + 1== *size)
		{
			arrBuf[i] = rand() % 100;
		}
		else
		{
			arrBuf[i] = arr[i];
		}
	}

	for (int i = 0; i < *size; i++)
	{
		arr[i] = arrBuf[i];
	}
	delete[] arrBuf;
}

void push_front(int* arr, int* size)//��������� �������� � ������ ������������� �������
{
	*size += 1;
	int* arrBuf = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		if (i == 0)
		{
			arrBuf[i] = rand() % 100;
		}
		else
		{
			arrBuf[i] = arr[i-1];
		}
	}

	for (int i = 0; i < *size; i++)
	{
		arr[i] = arrBuf[i];
	}

	delete[] arrBuf;
}

void insert(int* arr, int* size, int index)	//��������� �������� � ������������ ������ �� ���������� �������
{
	bool t = 0;
	*size += 1;
	int* arrBuf = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		if (i == index)
		{
			arrBuf[i] = rand() % 100;
			t = 1;
		}
		else if (t)
		{
			arrBuf[i] = arr[i-1];
		}
		else
		{
			arrBuf[i] = arr[i];
		}
	}

	for (int i = 0; i < *size; i++)
	{
		arr[i] = arrBuf[i];
	}

	delete[] arrBuf;
}

void pop_back()	//������� ��������� ������� �������
{

}

void pop_front()	//������� ������� ������� �������
{

}

void erase()		//������� ������� �� ������� �� ��������� �������
{

}