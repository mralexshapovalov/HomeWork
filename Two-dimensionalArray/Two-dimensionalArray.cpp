


// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;
int** sozdanye(int n, int m);
double** sozdanyeDouble(int n, int m);
float** sozdanyeFloat(int n, int m);
char** sozdanyechar(int n, int m);
int** sozdanye2(int n, int m);

void FillRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(double** array, double minValue, double maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(float** array, float minValue, float maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(char** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);

void Print(int** array, const int sizeArrayRows, const int sizeArrayCows); //выводит массив на экран
void Print(double** array, const int sizeArrayRows, const int sizeArrayCows); //выводит массив на экран
void Print(float** array, const int sizeArrayRows, const int sizeArrayCows); //выводит массив на экран
void Print(char** array, const int sizeArrayRows, const int sizeArrayCows); //выводит массив на экран

int Sum(int** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает сумму элементов массива
double Sum(double** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает сумму элементов массива
float Sum(float** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает сумму элементов массива

int Avg(int** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает среднее-арифметическое элементов массива
double Avg(double**, const int sizeArrayRows, const int sizeArrayCows); //возвращает среднее-арифметическое элементов массива
float Avg(float** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает среднее-арифметическое элементов массива

int MinValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает минимальное значение из массива
double MinValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает минимальное значение из массива
float MinValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает минимальное значение из массива

int MaxValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает максимальное значение из массива
double MaxValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает максимальное значение из массива
float MaxValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows); //возвращает максимальное значение из массива


void ShiftLeft(int** array, const int sizeArrayRows, const int sizeArrayCows); //выполняет циклический сдвиг массива на заданное число элементов влево
int* ShiftRight(int* array, int sizeArray); //выполняет циклический сдвиг массива на заданное число элементов вправо

void Sort(int** array, const int sizeArrayRows, const int sizeArrayCows); //выполняет сортировку массива в порядке возрастания
void Sort(double** array, const int sizeArrayRows, const int sizeArrayCows); //выполняет сортировку массива в порядке возрастания
void Sort(float** array, const int sizeArrayRows, const int sizeArrayCows); //выполняет сортировку массива в порядке возрастания

void UinqueRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);  //заполняет массив уникальными случайными числами в заданном диапазоне
void Search(int** array, const int sizeArrayRows, const int sizeArrayCows);  //находит в массиве повторяюшиеся значения, выводит их на экран
void Search(double** array, const int sizeArrayRows, const int sizeArrayCows);
void Search(float** array, const int sizeArrayRows, const int sizeArrayCows);

int main()
{

    const int sizeArrayRows = 5;
    const int sizeArrayCows = 5;
    int minValue; cout << "Enter the minimum range value - "; cin >> minValue;
    int maxValue; cout << "Enter the maximum range value - "; cin >> maxValue;
    int type;

    int** arrayInt;
    arrayInt = sozdanye(sizeArrayRows, sizeArrayCows);

    double** arrayDouble;
    arrayDouble = sozdanyeDouble(sizeArrayRows, sizeArrayCows);


    float** arrayFloat;
    arrayFloat = sozdanyeFloat(sizeArrayRows, sizeArrayCows);
    char** arrayChar;
    arrayChar = sozdanyechar(sizeArrayRows, sizeArrayCows);


    int* arr;
    //arr = sozdanye2(sizeArrayRows, sizeArrayCows);

    FillRand(arrayInt, minValue, maxValue, sizeArrayRows, sizeArrayCows);
    FillRand(arrayDouble, minValue, maxValue, sizeArrayRows, sizeArrayCows);
    FillRand(arrayFloat, minValue, maxValue, sizeArrayRows, sizeArrayCows);
    FillRand(arrayChar, minValue, maxValue, sizeArrayRows, sizeArrayCows);

    cout << "Output of an array with a data type int : " << endl;
    Print(arrayInt, sizeArrayRows, sizeArrayCows);
    cout << endl;
 /*   Sort(arrayInt, sizeArrayRows, sizeArrayCows);*/
    cout << endl;
    cout << "Output of an array with a data type double : " << endl;
    Print(arrayDouble, sizeArrayRows, sizeArrayCows);
    cout << endl;
    cout << "Output of an array with a data type float : " << endl;
    Print(arrayFloat, sizeArrayRows, sizeArrayCows);
    cout << endl;
    ShiftLeft(arrayInt, sizeArrayRows, sizeArrayCows);
    cout << endl;
    cout << "Output of an array with a data type char : " << endl;
    Print(arrayChar, sizeArrayRows, sizeArrayCows);
    cout << endl;
    cout << "SEARCH" << endl;
    Search(arrayInt, sizeArrayRows, sizeArrayCows);
    cout << endl;
    cout << endl;
   Search(arrayDouble, sizeArrayRows, sizeArrayCows);
    cout << endl;
    cout << endl;
    Search(arrayFloat, sizeArrayRows, sizeArrayCows);
    cout << endl;

    cout << "1.Return the sum of the array elements \n"
        "2.Return the arithmetic mean of the array elements\n"
        "3.Return the minimum value of the array \n"
        "4.Return the maximum value of the array\n"
        "5.Perform a cyclic shift of the array by a specified number of elements to left \n"
        "6.Perform a cyclic shift of the array by a specified number of elements to right\n"
        "7.Sort the array through Bubble sorting\n"
        "8.Fills an array with unique random numbers in a given range\n"
        "9.Find dublicate values in the array and display them on the screen\n"
        << endl;

    cout << endl;
    cout << "Select an action : ";  cin >> type;

    switch (type)
    {

    case 1:
        cout << "Sum of the array elements : " << endl;
        cout << "int    : " << Sum(arrayInt, sizeArrayRows, sizeArrayCows) << endl;
        cout << "double : " << Sum(arrayDouble, sizeArrayRows, sizeArrayCows) << endl;
        cout << "float  : " << Sum(arrayFloat, sizeArrayRows, sizeArrayCows) << endl;
        break;

    case 2:
        cout << "Arithmetic mean of the array elements :" << endl;
        cout << "int    : " << Avg(arrayInt, sizeArrayRows, sizeArrayCows) << endl;
        cout << "double : " << Avg(arrayDouble, sizeArrayRows, sizeArrayCows) << endl;
        cout << "float  : " << Avg(arrayFloat, sizeArrayRows, sizeArrayCows) << endl;
        break;

    case 3:
        cout << "Minimum value of the array : " << endl;
        cout << "int    : " << MinValueIn(arrayInt, sizeArrayRows, sizeArrayCows) << endl;
        cout << "double : " << MinValueIn(arrayDouble, sizeArrayRows, sizeArrayCows) << endl;
        cout << "float  : " << MinValueIn(arrayFloat, sizeArrayRows, sizeArrayCows) << endl;
        break;

    case 4:
        cout << "Maximum value of the array : " << endl;
        cout << "int    : " << MaxValueIn(arrayInt, sizeArrayRows, sizeArrayCows) << endl;
        cout << "double : " << MaxValueIn(arrayDouble, sizeArrayRows, sizeArrayCows) << endl;
        cout << "float  : " << MaxValueIn(arrayFloat, sizeArrayRows, sizeArrayCows) << endl;
        break;

    case 5:
        cout << "5.Perform a cyclic shift of the array by a specified number of elements to left : " << endl;

        ShiftLeft(arrayInt, sizeArrayRows, sizeArrayCows);
        cout << endl;
        Print(arrayInt, sizeArrayRows, sizeArrayCows);
        break;

    case 6:
        cout << "6.Perform a cyclic shift of the array by a specified number of elements to right :" << endl;
        ///*  arr = ShiftRight(arrayInt, sizeArrayRows);*/
        //cout << endl;
        //for (int i = 0; i < sizeArrayRows; i++)
        //{
        //    cout << arr[i] << "\t";
        //}
        break;

    case 7:
        cout << "7.Sort the array through Bubble sorting :" << endl;

        //Sort(arrayInt, sizeArrayRows, sizeArrayCows);
        break;

    case 8:
        int minValjue, MaxValue;
        cin >> minValjue;
        cin >> MaxValue;
        //arr = UinqueRand(arrayInt, minValjue, MaxValue, sizeArrayRows);
        //cout << endl;
        //for (int i = 0; i < sizeArrayRows; i++)
        //{
        //    cout << arr[i] << "\t";


        UinqueRand(arrayInt, minValjue, MaxValue, sizeArrayRows, sizeArrayCows);
        break;

    case 9:
        cout << "9.Find dublicate values in the array and display them on the screen " << endl;

        ///*  arr = Search(arrayInt, sizeArrayRows);*/
        //cout << endl;
        //for (int i = 0; i < sizeArrayRows; i++)
        //{
        //    cout << arr[i] << "\t";
        //}
        break;

    default:
        break;
    }

    for (int i = 0; i < 10; i++)
    {
        delete[] arrayInt[i];
    }
    for (int i = 0; i < 10; i++)
    {
        delete[] arrayDouble[i];
    }
    for (int i = 0; i < 10; i++)
    {
        delete[] arrayFloat[i];
    }
    for (int i = 0; i < 10; i++)
    {
        delete[] arrayChar[i];
    }

}

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

int** sozdanye2(int n, int m)
{

    int** A;

    A = new int* [n];

    for (int i = 0; i < n; i++)
    {

        A[i] = new int[m];

    }
    return A;


}

double** sozdanyeDouble(int n, int m)
{

    double** A;

    A = new double* [n];

    for (int i = 0; i < n; i++)
    {

        A[i] = new double[m];

    }

    return A;

}

float** sozdanyeFloat(int n, int m)
{

    float** A;

    A = new float* [n];

    for (int i = 0; i < n; i++)
    {

        A[i] = new float[m];

    }

    return A;

}

char** sozdanyechar(int n, int m)
{

    char** A;

    A = new char* [n];

    for (int i = 0; i < n; i++)
    {

        A[i] = new char[m];

    }

    return A;

}

void FillRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows)
{


    if (minValue > maxValue)
    {
        int buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;

    srand(time(NULL));

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            array[i][j] = rand() % 100;

        }

    }


}

void FillRand(double** array, double minValue, double maxValue, const int sizeArrayRows, const int sizeArrayCows)
{
    if (minValue > maxValue)
    {
        double buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;


    maxValue *= 100;
    minValue *= 100;

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
            array[i][j] /= 100;
        }

    }

}

void FillRand(float** array, float minValue, float maxValue, const int sizeArrayRows, const int sizeArrayCows)
{
    if (minValue > maxValue)
    {
        float buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;
    }
    if (minValue == maxValue)minValue++;


    maxValue *= 100;
    minValue *= 100;

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
            array[i][j] /= 100;
        }

    }
}

void FillRand(char** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows)
{
    if (minValue > maxValue)
    {
        int buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            array[i][j] = minValue + rand() % (maxValue - minValue);

        }

    }
}

void Print(int** array, const int sizeArrayRows, const int sizeArrayCows) //выводит массив на экран
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

void Print(double** array, const int sizeArrayRows, const int sizeArrayCows) //выводит массив на экран
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

void Print(float** array, const int sizeArrayRows, const int sizeArrayCows) //выводит массив на экран
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

void Print(char** array, const int sizeArrayRows, const int sizeArrayCows) //выводит массив на экран
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

int  Sum(int** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает сумму элементов массива
{
    int sum = 0;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayCows; j++)


            sum += array[i][j];


    return sum;
}

double  Sum(double** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает сумму элементов массива
{
    double sum = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayCows; j++)


            sum += array[i][j];


    return sum;

}

float  Sum(float** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает сумму элементов массива
{
    float sum = 0.0f;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayCows; j++)


            sum += array[i][j];

    return sum;

}

int Avg(int** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает среднее-арифметическое элементов массива
{

    int temp = 0;
    int sumElemnts = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (sizeArrayRows * sizeArrayCows);

        }

    }

    return sumElemnts;

}

double Avg(double** array, int sizeArrayRows, const int sizeArrayCows) //возвращает среднее-арифметическое элементов массива
{

    double temp = 0.0;
    double sumElemnts = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (sizeArrayRows * sizeArrayCows);

        }

    }

    return sumElemnts;

}

float Avg(float** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает среднее-арифметическое элементов массива
{

    float temp = 0.0;
    float sumElemnts = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (sizeArrayRows * sizeArrayCows);

        }

    }

    return sumElemnts;

}

int MinValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает минимальное значение из массива
{

    int minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            if (array[i][j] < minElement)
            {
                cell = i;
                cell1 = j;
                minElement = array[cell][cell1];
            }
        }
    }

    return minElement;
}

double MinValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает минимальное значение из массива
{

    double minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            if (array[i][j] < minElement)
            {
                cell = i;
                cell1 = j;
                minElement = array[cell][cell1];
            }
        }
    }

    return minElement;
}

float MinValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает минимальное значение из массива
{

    double minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            if (array[i][j] < minElement)
            {
                cell = i;
                cell1 = j;
                minElement = array[cell][cell1];
            }
        }
    }

    return minElement;
}

int MaxValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает максимальное значение из массива
{

    int minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            if (array[i][j] > minElement)
            {
                cell = i;
                cell1 = j;
                minElement = array[cell][cell1];
            }
        }
    }

    return minElement;
}

double MaxValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает максимальное значение из массива
{

    double minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            if (array[i][j] > minElement)
            {
                cell = i;
                cell1 = j;
                minElement = array[cell][cell1];
            }
        }
    }

    return minElement;
}

float MaxValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows) //возвращает максимальное значение из массива
{

    float minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            if (array[i][j] > minElement)
            {
                cell = i;
                cell1 = j;
                minElement = array[cell][cell1];
            }
        }
    }

    return minElement;

}

void ShiftLeft(int** array, const int sizeArrayRows, const int sizeArrayCows) //выполняет циклический сдвиг массива на заданное число элементов влево
{
    int value;
  
    cout << "Cycle shift left" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++) 
    {


        for (int j = 0; j < sizeArrayRows; j++)
        {
            int temp = array[j][0];
            for (int g = 0; g < sizeArrayCows - 1; g++) 
            

                array[j][g] = array[j][g + 1];
                array[j][sizeArrayCows - 1] = temp;

            

        }

    }

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
      

            cout << array[i][j] << "  ";
            cout << endl;
       
    }
}

int* ShiftRight(int* array, int sizeArray) //выполняет циклический сдвиг массива на заданное число элементов вправо
{
    int value;
    cout << "Cycle shift right" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        int  buffer = array[sizeArray - 1];

        for (int j = sizeArray - 1; j >= 0; j--)
        {
            array[j] = array[j - 1];
        }

        array[0] = buffer;
        cout << endl;
    }

    return array;
}

void Sort(int** array, const int sizeArrayRows, const int sizeArrayCows)  //выполняет сортировку массива в порядке возрастания
{

    int emptyValue;

    for (int k = 0; k < sizeArrayRows; ++k) {

        for (int l = 0; l < sizeArrayCows; ++l)
        {

            for (int i = 0; i < sizeArrayRows; ++i)
            {
                for (int j = 0; j < sizeArrayCows; ++j)
                {

                    if (array[i][j] > array[k][l])
                    {
                        emptyValue = array[i][j];
                        array[i][j] = array[k][l];
                        array[k][l] = emptyValue;
                    }
                }
            }
        }
    }

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }
}

void Sort(double** array, const int sizeArrayRows, const int sizeArrayCows)  //выполняет сортировку массива в порядке возрастания
{

    double emptyValue;

    for (int k = 0; k < sizeArrayRows; ++k) {

        for (int l = 0; l < sizeArrayCows; ++l)
        {
            for (int i = 0; i < sizeArrayRows; ++i)
            {
                for (int j = 0; j < sizeArrayCows; ++j)
                {

                    if (array[i][j] > array[k][l])
                    {
                        emptyValue = array[i][j];
                        array[i][j] = array[k][l];
                        array[k][l] = emptyValue;
                    }
                }
            }
        }
    }


    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }
}

void Sort(float** array, const int sizeArrayRows, const int sizeArrayCows)  //выполняет сортировку массива в порядке возрастания
{

    float emptyValue;

    for (int k = 0; k < sizeArrayRows; ++k) {

        for (int l = 0; l < sizeArrayCows; ++l)
        {
            for (int i = 0; i < sizeArrayRows; ++i)
            {
                for (int j = 0; j < sizeArrayCows; ++j)
                {

                    if (array[i][j] > array[k][l])
                    {
                        emptyValue = array[i][j];
                        array[i][j] = array[k][l];
                        array[k][l] = emptyValue;
                    }
                }
            }
        }
    }

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

void UinqueRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows)  //заполняет массив уникальными случайными числами в заданном диапазоне
{
    int size = 5;

    for (int k = 0; k < sizeArrayRows; k++)
    {
        for (int l = k + 1; l < sizeArrayCows; l++)
        {
            for (int i = 0; i <= sizeArrayRows; i++)
            {
                for (int j = i + 1; j <= sizeArrayCows; j++)
                {

                    if (array[l][k] == array[i][j] && i != j && k != l)
                    {

                        array[i][j] = minValue + rand() % (maxValue - minValue);
                        j = 0;
                    }
                }
            }
        }
    }


    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }
}

void Search(int** array, const int sizeArrayRows, const int sizeArrayCows)  //находит в массиве повторяюшиеся значения, выводит их на экран
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            for (int l = i; l < sizeArrayRows; l++)
            {
                for (int k = j + 1; k < sizeArrayCows; k++)
                    if (array[i][j] == array[l][k])
                    {
                        cout << "mass[" << i << "][ " << j <<"] == mass[ " << l << "][" << k << "]" << array[i][j]<< endl;
                    }
            }
        }

    }
}


void Search(double** array, const int sizeArrayRows, const int sizeArrayCows)  //находит в массиве повторяюшиеся значения, выводит их на экран
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            for (int l = i; l < sizeArrayRows; l++)
            {
                for (int k = j + 1; k < sizeArrayCows; k++)
                    if (array[i][j] == array[l][k])
                    {
                        cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << endl;
                    }
            }
        }

    }
}

void Search(float** array, const int sizeArrayRows, const int sizeArrayCows)  //находит в массиве повторяюшиеся значения, выводит их на экран
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayCows; j++)
        {
            for (int l = i; l < sizeArrayRows; l++)
            {
                for (int k = j + 1; k < sizeArrayCows; k++)
                    if (array[i][j] == array[l][k])
                    {
                        cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << endl;
                    }
            }
        }

    }
}



