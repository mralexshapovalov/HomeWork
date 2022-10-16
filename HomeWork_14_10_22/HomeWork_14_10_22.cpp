// HomeWork_14_10_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    const  int size_array = 5;
    int array[size_array];

    // 1. Ввести значения элементов массива с клавиатуры;
    cout << "Введите значение элементов в массиве " << endl;
    for (int i = 0; i < size_array; i++)
    {
        cin >> array[i];
    }
    //2. Вывести массив на экран;

    for (int i = 0; i < size_array; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    // 3. Вывести массив на экран в обратном порядке;
    cout << "Вывод массива в обратном порядке " << endl;

    for (int i = size_array - 1; i >= 0; i--)
    {
        cout << array[i] << "\t";
    }

    //4. Вычислить сумму элементов массива;
    cout << endl;
    int sum = 0;
    for (int i = 0; i < size_array; i++)
    {
        sum += size_array;

    }
    cout << "Сумма элементов массива = " << sum << endl;

    //5. Вычислить сумму среднее - арифметическое массива;
    cout << endl;

    for (int i = 0; i < size_array; i++)
    {
        sum += size_array;

    }
    cout << "Сумма серднее - арифметическое  = " << sum / size_array << endl;





    //6. Найти минимальное и максимальное значение

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
    cout << "Минимальное значение - " << min << endl;
    cout << "Максимальное значение - " << max << endl;



}
