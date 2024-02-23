#include "Includes.h"

void Lab1() {
	RusConsole();
	cout << "Студент: 090304-РПИб-о23 Рыжкова Е.А." << endl << endl;
	unsigned int N = 0; // число для ввода
	unsigned long long x = 1; // число вводимое полярником
	unsigned long long max = 0; // максимальное кратное
	
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

	while (x <= ((ULLONG_MAX - 1) / 10)) // проверка переполненности X
	{
		// если вводимое число четное, то не будет кратного числа из единиц
		if (N % 2 == 0)
		{
			break;
		}
		
		// если х делится на N без остатка
		if (x % N == 0) {
			max = x;
		}

		x = x * 10 + 1;
	}

	cout << endl << "Входные данные: " << N << endl;
	// если максимальное кратное не найдено
	if (max == 0)
	{
		cout << "Выходные данные: NO" << endl;
	}
	else {
		cout << "Выходные данные: " << max << endl;
	}
}