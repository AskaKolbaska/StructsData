#include "Includes.h"
#include "Lab1.h"

void Lab1() {
	unsigned int N = 0; // число для ввода
	unsigned long long x = 1; // число вводимое полярником
	unsigned long long max = 1; // максимальное кратное
	bool notDiv = false; // флаг для обозначения отсутствия кратных
	
	cout << "Введите число N: ";
	cin >> N;

	if (N > pow(10, 6))
	{
		cout << "Слишком большое число" << endl;
		exit(EXIT_SUCCESS);
	}
	else if (N <= 0) {
		cout << "Число должно быть положительным!" << endl;
		exit(EXIT_SUCCESS);
	}

	// если вводимое число четное, то не будет кратного числа из единиц
	if (N % 2 == 0)
	{
		notDiv = true;
	}

	// если вводимое число кратно 5, то не будет кратного числа из единиц
	if (N % 5 == 0)
	{
		notDiv = true;
	}
	
	cout << endl << "Входные данные: " << N << endl;
	cout << "Выходные данные: ";
	// перебор возможных значений до вводимого числа
	for (long int i = 2; i < N; i++)
	{
		x = (x * 10 + 1) % N;

		if (x == 0)
		{
			print1(i);
			break;
		}
		if (x == 1)
		{
			print1(i - 1);
			break;
		}
	}	
}

void print1(const int n)
{
	for (int i = 0; i < n; i++)
		cout << 1;
	cout << endl;
}