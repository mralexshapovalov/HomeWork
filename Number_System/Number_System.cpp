// Number_System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX
int main()
{

	setlocale(LC_ALL, "Rus");

#ifdef  DEC_2_BIN


	const int n = 32;
	bool bin[n] = {};
	int decimal;
	cout << "������� ���������� ����� "; cin >> decimal;
	cout << decimal << endl;
	int i = 0;//����� �������

	while (decimal) 
	{
		bin[i] = decimal % 2; //�������� ������� ������ ��������� �����
		decimal /= 2;  //������� ���������� ������� ������ �� ����������� ����� 
		i++; //��������� � ���������� ������� 
	}

	//������� ������� �� ������� � �������� �������
	for (--i; i >= 0; i--) 
	{
		cout << bin[i];
		if (i % 8==0) cout << " ";	
		if (i % 4 == 0) cout << " ";
	}

#endif   

}


