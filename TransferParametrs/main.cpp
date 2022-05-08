#include <iostream>
using namespace std;

void Exchange(int* a, int* b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

void main()
{
	setlocale(LC_ALL, "RU");
	int a, b;
	a = 5;
	b = 7;
	cout << a << "\t" << b << endl;
	Exchange(&a, &b);
	cout << a << "\t" << b << endl;
}