// Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


//rand()-���������� ���������������� ����� � ��������� �� 0 �� RAND_MAX =32 767




int Random(int minValue, int maxValue, int sizeArray); //�������� �������� 

void Bubble_sort(int array[], int sizeArray); //���������� ���������


int main()
{
    setlocale(LC_ALL, "");

    int minValue, maxValue, sizeArray;



   cout << "������� ����������� �����  : "; cin >> minValue;
   cout << "������� ������������ ����� : "; cin >> maxValue;
   cout << "������� ������ �������     : "; cin >> sizeArray;
   cout << "������ � ���������� �������:" << endl;

   int *array = new int[sizeArray]; //*���������(���� �� ���������,�� ����� �����������)

   for (int i = 0; i < sizeArray; i++) 
   {

       array[i] = Random(minValue, maxValue, sizeArray);

   }

   

   for (int i = 0; i < sizeArray; i++)
   {

       cout << array[i] << "\t";
   }

   cout << endl;
   cout << "������������� ������ � ������� ��������� -���������� ���������" << endl;

   Bubble_sort(array, sizeArray);


  for (int i = 0; i < sizeArray; i++)
  {

       cout << array[i] << "\t";
  }
   
 
   delete[] array;
   

}



int Random(int minValue, int maxValue, int sizeArray)
{

    int* array = new int[sizeArray];
    for (int i = 0; i < sizeArray; i++)
    {

        array[i] = rand() % (minValue - maxValue);
    }
    for (int i = 0; i < sizeArray; i++)
    {


        return array[i];
    }
    delete[] array;

}



void Bubble_sort(int array[], int sizeArray)
{

    int emptyValue;

    for (int i = 0; i < sizeArray; i++)
    {

        for (int j = i + 1; j < sizeArray; j++)
        {

            if (array[i] > array[j])
            {

                emptyValue = array[i];

                array[i] = array[j];

                array[j] = emptyValue;
            }


        }
    }


}



