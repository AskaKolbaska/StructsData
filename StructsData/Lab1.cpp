#include "Includes.h"
#include "Lab1.h"

void Lab1() {
	unsigned int N = 0; // ����� ��� �����
	unsigned long long x = 1; // ����� �������� ����������
	unsigned long long max = 1; // ������������ �������
	bool notDiv = false; // ���� ��� ����������� ���������� �������
	
	cout << "������� ����� N: ";
	cin >> N;

	if (N > pow(10, 6))
	{
		cout << "������� ������� �����" << endl;
		exit(EXIT_SUCCESS);
	}
	else if (N <= 0) {
		cout << "����� ������ ���� �������������!" << endl;
		exit(EXIT_SUCCESS);
	}

	// ���� �������� ����� ������, �� �� ����� �������� ����� �� ������
	if (N % 2 == 0)
	{
		notDiv = true;
	}

	// ���� �������� ����� ������ 5, �� �� ����� �������� ����� �� ������
	if (N % 5 == 0)
	{
		notDiv = true;
	}
	
	cout << endl << "������� ������: " << N << endl;
	cout << "�������� ������: ";
	// ������� ��������� �������� �� ��������� �����
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