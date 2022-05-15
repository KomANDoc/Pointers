#include <iostream>
using namespace std;

void fill(int arr[],int size);
void print(int* arr, int* size);
void push_back(int** arr, int* size, int value);
void push_front(int** arr, int* size, int value);
void insert(int** arr, int* size, int value, int index);


void main()
{
	setlocale(LC_ALL, "");
	int size, index;
	cout << "Введите размер массива: "; cin >> size;
	int* arr = new int[size];

	fill(arr, size);
	print(arr, &size);

	cout << "\n\n\n";
	
	push_back(&arr, &size, 123);
	print(arr, &size);

	cout << "\n\n\n";

	push_front(&arr, &size, 80);
	print(arr, &size);

	cout << "\n\n\n";

	cout << "Введите индекс куда добавить элемент: "; cin >> index;
	cout << "\n";
	insert(&arr, &size, 75, index);
	print(arr, &size);

	cout << "\n\n\n";

	delete[] arr;
}


void fill(int arr[], int size)
{
	for (int i = 0; i < size; i++)//через оператор * и указатели
	{
		*(arr + i) = rand()%100;
	}
}

void print(int* arr, int* size)
{
	for (int i = 0; i < *size; i++)//через стандартный оператор индексирования и for
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int** arr, int* size, int value)//добавляет значение в конец динамического массива
{
	*size += 1;
	int* arrBuf = new int[*size]{};
	for (int i = 0; i < *size; i++)	arrBuf[i] = (*arr)[i];
	delete[] *arr;
	*arr = arrBuf;
	(*arr)[*size - 1] = value;
}

void push_front(int** arr, int* size, int value)//добавляет значение в начало динамического массива
{
	*size += 1;
	int* arrBuf = new int[*size]{};
	for (int i = 1; i < *size; i++) arrBuf[i] = (*arr)[i-1];
	delete[] *arr;
	*arr = arrBuf;
	(*arr)[0] = value;
}

void insert(int** arr, int* size, int value, int index)	//вставляет значение в динамический массив по указанному индексу
{
	*size += 1;
	int* arrB = new int[*size]{};
	for (int i = 0; i < index; i++) arrB[i] = (*arr)[i];
	arrB[index] = value;
	for (int i = index; i < *size; i++) arrB[i+1] = (*arr)[i];
	delete[] *arr;
	*arr = arrB;
}

void pop_back()	//удаляет последний элемент массива
{

}
void pop_front()	//удаляет нулевой элемент массива
{

}
void erase()		//удаляет элемент из массива по заданному индексу
{

}