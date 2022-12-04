// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int** sozdanye(int n, int m)
{

    int** A;

    A = new int* [n];

    for (int i = 0; i < n; i++)
    {

        A[i] = new int[m];

    }
    return A;


}



void UinqueRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayColumn)  //çàïîëíÿåò ìàññèâ óíèêàëüíûìè ñëó÷àéíûìè ÷èñëàìè â çàäàííîì äèàïàçîíå
{
    int size = 5;
    srand(time(NULL));
    
            for (int i = 0; i < sizeArrayRows; i++)
            {
                for (int j = 0; j < sizeArrayColumn; j++)
                {
                    
                    

                        array[i][j] = rand() % (maxValue - minValue+1)+ minValue;
                      
                    
                }
            }
        
    


    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }


}

int main()
{
    const int sizeArrayRows = 5;
    const int sizeArrayColumn = 5;

    int valuemin = 20;
    int valuemax = 60;
    int** arrayInt;
    arrayInt = sozdanye(sizeArrayRows, sizeArrayColumn);
    /*FillRand(arrayInt, valuemin, valuemax, sizeArrayRows, sizeArrayColumn);
    Print(arrayInt, sizeArrayRows, sizeArrayColumn);*/
    cout << endl;
    
   UinqueRand(arrayInt, valuemin, valuemax, sizeArrayRows, sizeArrayColumn);

   setlocale(LC_ALL, "ru");
   srand(time(NULL));
   int const ROWS = 5;
   int const COLS = 5;
   int const SIZE = ROWS * COLS;
   int Row[ROWS][COLS];
   int Rew[SIZE];
   //заполнение массива REW
   bool hasalraedy;
   int RandomVelue;

   for (int i = 0; i < SIZE; )
   {
       hasalraedy = false;
       RandomVelue = rand() % 70;
       for (int j = 0; j < i; j++)
       {

           if (Rew[j] == RandomVelue)
           {
               hasalraedy = true;
               break;
           }
       }
       if (!hasalraedy)
       {
           Rew[i] = RandomVelue;
           i++;
       }

   }
   //Заполнение ROW
   int c = 0;
   for (int i = 0; i < sizeArrayRows; i++)
   {
       for (int j = 0; j < sizeArrayColumn; j++)
       {
           Row[i][j] = Rew[c];
           c++;
       }
   }

   //вывод массива
   for (int i = 0; i < sizeArrayRows; i++)
   {
       for (int j = 0; j < sizeArrayColumn; j++)
       {
           cout << Row[i][j] << '\t';
       }
       cout << endl;
   }
  

    for (int i = 0; i < 10; i++)
    {
        delete[] arrayInt[i];
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
