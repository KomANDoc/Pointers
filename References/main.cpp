#include <iostream>
using namespace std;

void Exchange(int& a, int& b)//При её вызове сюда капируются АДРЕССА передоваемых переменных 
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
	cout << "А = " << a << endl;
	cout << "Б = " << b << "\n\n";
	cout << "Адресс переменной а - " << &a << "\n";
	cout << "Адресс ссылки с переменной а - " << &ra << "\n\n";
	ra += 3;
	cout << "Теперь а равен = " << a << "\n\n";
	cout << a << "\t" << b << "\n\n";
	Exchange(ra, rb);
	cout << a << "\t" << b << endl;
}