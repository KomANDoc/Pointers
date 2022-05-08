#include <iostream>
using namespace std;

//#define POINTERS_BASICS
void main()
{
	setlocale(LC_ALL, "RU");

#ifdef POINTERS_BASICS
	int a = rand() - rand() * rand() + rand() + (rand() * rand()); // Объявление переменной
	int* pa = &a; // Объявление указателя
	cout << a << endl;// Вывод переменной 
	cout << &a << endl;// Вывод адресса переменной "а", при выводе
	cout << pa << endl;// Вывод адресса переменной "а", хранящегося в указателе "pa"
	cout << *pa << endl;// Разыменовывает указатель, и возвращает значение по адрессу
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