#include <iostream>
using namespace std;


void fill(int arr[], int size);//заполнение динамического массива
void fillO(int arr_S[], int* arr, int size);//заполнение массива с четными числами 
void fillE(int arr_S[], int* arr, int size);//заполнение массива с нечетными числами
void resolver(int arr[], const int size, int* even_n, int* odd_n);//распроделение на четные и нечетные
void print(int arr, int n);//вывод массива на экран

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr[size];
	int even_n, odd_n;

	cout << "Заполнение статичного массива случайным числом: " << endl;
	fill(arr, size);
	print(arr, size);
	cout << "\n\n\n";

	cout << "Определение количества четных и нечетных чисел в массиве: " << endl;
	resolver(arr, size, &even_n, &odd_n);
	cout << even_n << "\t" << odd_n << "\n\n\n";
	
	cout << "Заполнение массива с четными числами и нечетными элементами " << endl;
	int* even = new int[even_n];
	int* odd = new int[odd_n];
	fillE(arr, even, size);
	fillO(arr, odd, size);

	cout << "\n";
	cout << "Четный массив: " << endl;
	print(even, even_n);
	cout << "\n\n\n";
	cout << "Нечетный массив: " << endl;
	print(odd, odd_n);
	cout << "\n\n\n";

	delete[] even;
	delete[] odd;
}

void resolver(int arr[],const int size, int* even_n, int* odd_n)
{
	*even_n = 0;
	*odd_n = 0;
	for (int i=0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			*even_n += 1;
		}
		else
		{
			*odd_n += 1;
		}
	}
}

void fill(int arr[], int size)
{
	for (int i = 0; i < size; i++)//через оператор * и указатели
	{
		arr[i] = rand()% 100;
	}
}

void fillE(int arr_S[], int* arr, int size)
{
	int n = -1;
	for (int i = 0; i < size; i++)
	{
		n += 1;
		if (arr_S[i] % 2 == 0)
		{
			arr[n] = arr_S[i];
		}
		else if (arr_S[i] % 2 != 0)
		{
			n -= 1;
		}
	}
}

void fillO(int arr_S[], int* arr, int size)
{
	int n = -1;
	for (int i = 0; i < size; i++)
	{
		n += 1;
		if (arr_S[i] % 2 != 0)
		{
			arr[n] = arr_S[i];
		}
		else if(arr_S[i] % 2 == 0)
		{
			n-=1;
		}
	}
}

void print(int arr[], const int size)
{
	for (int i = 0; i < size; i++)//через стандартный оператор индексирования и for
	{
		cout << arr[i] << "\t";
	}
}
