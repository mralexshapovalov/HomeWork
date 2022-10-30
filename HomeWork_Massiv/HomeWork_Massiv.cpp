// HomeWork_Massiv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int buffer;
int value;


void Left_shift(int mas[], int size)
{
	cout << "Циклический сдвиг влево" << endl;
	cout << "Введите колличество элементов"; cin >> value;

	for (int i = 0; i < value; i++)
	{
		buffer = mas[0];

		for (int j = 0; j < size; j++)
		{
			mas[j] = mas[j + 1];

		}
		mas[size - 1] = buffer;
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		cout << mas[i] <<"\t";

	}
}

void Right_shift(int mas[], int size)
{
	cout << "Циклический сдвиг вправо " << endl;
	cout << "Введите колличество элементов "; cin >> value;

	for (int i = 0; i < value; i++)
	{
		buffer = mas[size - 1];

		for (int j = size - 1; j >= 0; j--)
		{
			mas[j] = mas[j - 1];
		}
		mas[0] = buffer;
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << "\t";

	}
}

int main()
{

	setlocale(LC_ALL, "Rus");

	int n;
	const int size = 10;
	int mas[size] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "1.Сдвиг влево" << endl;
	cout << "2.Сдвиг впрво" << endl;
	cin >> n;


	switch (n)
	{
	case 1:
		Left_shift(mas, size);
		break;

	case 2:
		Right_shift(mas, size);
		break;

	default:
		break;
	}


}



