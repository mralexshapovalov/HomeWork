// HomeWork_14_10_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    const  int size_array = 5;
    int array[size_array];

    // 1. ������ �������� ��������� ������� � ����������;
    cout << "������� �������� ��������� � ������� " << endl;
    for (int i = 0; i < size_array; i++)
    {
        cin >> array[i];
    }
    //2. ������� ������ �� �����;

    for (int i = 0; i < size_array; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    // 3. ������� ������ �� ����� � �������� �������;
    cout << "����� ������� � �������� ������� " << endl;

    for (int i = size_array - 1; i >= 0; i--)
    {
        cout << array[i] << "\t";
    }

    //4. ��������� ����� ��������� �������;
    cout << endl;
    int sum = 0;
    for (int i = 0; i < size_array; i++)
    {
        sum += size_array;

    }
    cout << "����� ��������� ������� = " << sum << endl;

    //5. ��������� ����� ������� - �������������� �������;
    cout << endl;

    for (int i = 0; i < size_array; i++)
    {
        sum += size_array;

    }
    cout << "����� ������� - ��������������  = " << sum / size_array << endl;





    //6. ����� ����������� � ������������ ��������

    int min = 0;
    int max = 0;
 

    for (int i = 0; i < size_array; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
           
    
        }
        if (array[i] > max)
        {
            max = array[i];
           

        }
    }
    cout << "����������� �������� - " << min << endl;
    cout << "������������ �������� - " << max << endl;



}
