#include "Includes.h"

void Lab1() {
	RusConsole();
	cout << "�������: 090304-����-�23 ������� �.�." << endl << endl;
	unsigned int N = 0; // ����� ��� �����
	unsigned long long x = 1; // ����� �������� ����������
	unsigned long long max = 0; // ������������ �������
	
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

	while (x <= ((ULLONG_MAX - 1) / 10)) // �������� ��������������� X
	{
		// ���� �������� ����� ������, �� �� ����� �������� ����� �� ������
		if (N % 2 == 0)
		{
			break;
		}
		
		// ���� � ������� �� N ��� �������
		if (x % N == 0) {
			max = x;
		}

		x = x * 10 + 1;
	}

	cout << endl << "������� ������: " << N << endl;
	// ���� ������������ ������� �� �������
	if (max == 0)
	{
		cout << "�������� ������: NO" << endl;
	}
	else {
		cout << "�������� ������: " << max << endl;
	}
}