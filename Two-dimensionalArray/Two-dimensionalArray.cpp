
// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;
int** NewArrayInt(const int sizeArrayRows, const int sizeArrayCows);
double** NewArrayDouble(const int sizeArrayRows, const int sizeArrayCows);
float** NewArrayFloat(const int sizeArrayRows, const int sizeArrayCows);
char** NewArrayChar(const int sizeArrayRows, const int sizeArrayCows);
int** NewArrayInt_2(const int sizeArrayRows, const int sizeArrayCows);

void FillRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(double** array, double minValue, double maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(float** array, float minValue, float maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(char** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);

void Print(int** array, const int sizeArrayRows, const int sizeArrayCows); //âûâîäèò ìàññèâ íà ýêðàí
void Print(double** array, const int sizeArrayRows, const int sizeArrayCows); //âûâîäèò ìàññèâ íà ýêðàí
void Print(float** array, const int sizeArrayRows, const int sizeArrayCows); //âûâîäèò ìàññèâ íà ýêðàí
void Print(char** array, const int sizeArrayRows, const int sizeArrayCows); //âûâîäèò ìàññèâ íà ýêðàí

int Sum(int** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ñóììó ýëåìåíòîâ ìàññèâà
double Sum(double** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ñóììó ýëåìåíòîâ ìàññèâà
float Sum(float** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ñóììó ýëåìåíòîâ ìàññèâà

int Avg(int** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà
double Avg(double**, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà
float Avg(float** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà

int MinValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå èç ìàññèâà
double MinValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå èç ìàññèâà
float MinValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå èç ìàññèâà

int MaxValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå èç ìàññèâà
double MaxValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå èç ìàññèâà
float MaxValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows); //âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå èç ìàññèâà

int** ShiftLeft(int** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âëåâî
double** ShiftLeft(double** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âëåâî
float** ShiftLeft(float** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âëåâî

void ShiftRight(int** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âïðàâî

int** Sort(int** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò ñîðòèðîâêó ìàññèâà â ïîðÿäêå âîçðàñòàíèÿ
double** Sort(double** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò ñîðòèðîâêó ìàññèâà â ïîðÿäêå âîçðàñòàíèÿ
float** Sort(float** array, const int sizeArrayRows, const int sizeArrayCows); //âûïîëíÿåò ñîðòèðîâêó ìàññèâà â ïîðÿäêå âîçðàñòàíèÿ

void UinqueRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);

void Search(int** array, const int sizeArrayRows, const int sizeArrayCows);  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
void Search(double** array, const int sizeArrayRows, const int sizeArrayCows);
void Search(float** array, const int sizeArrayRows, const int sizeArrayCows);

int main()
{

    const int sizeArrayRows = 5;
    const int sizeArrayColumn = 5;
    int value;

    int minValue; cout << "Enter the minimum range value - "; cin >> minValue;
    int maxValue; cout << "Enter the maximum range value - "; cin >> maxValue;

    int** array_2;
    array_2 = NewArrayInt_2(sizeArrayRows, sizeArrayColumn);

    int** arrayInt;
    arrayInt = NewArrayInt(sizeArrayRows, sizeArrayColumn);

    double** arrayDouble;
    arrayDouble = NewArrayDouble(sizeArrayRows, sizeArrayColumn);

    float** arrayFloat;
    arrayFloat = NewArrayFloat(sizeArrayRows, sizeArrayColumn);

    char** arrayChar;
    arrayChar = NewArrayChar(sizeArrayRows, sizeArrayColumn);

    int** arrayContainerInt;
    double** arrayContainerDouble;
    float** arrayContainerFloat;

    FillRand(arrayInt, minValue, maxValue, sizeArrayRows, sizeArrayColumn);
    FillRand(arrayDouble, minValue, maxValue, sizeArrayRows, sizeArrayColumn);
    FillRand(arrayFloat, minValue, maxValue, sizeArrayRows, sizeArrayColumn);
    FillRand(arrayChar, minValue, maxValue, sizeArrayRows, sizeArrayColumn);

    cout << "Output of an array with a data type int : " << endl;
    Print(arrayInt, sizeArrayRows, sizeArrayColumn);
    cout << endl;
    /*   Sort(arrayInt, sizeArrayRows, sizeArrayCows);*/
    cout << endl;
    cout << "Output of an array with a data type double : " << endl;
    Print(arrayDouble, sizeArrayRows, sizeArrayColumn);
    cout << endl;
    cout << "Output of an array with a data type float : " << endl;
    Print(arrayFloat, sizeArrayRows, sizeArrayColumn);
    cout << endl;
    cout << "Output of an array with a data type char : " << endl;
    Print(arrayChar, sizeArrayRows, sizeArrayColumn);
    cout << endl;
    cout << "SEARCH" << endl;
    Search(arrayInt, sizeArrayRows, sizeArrayColumn);
    cout << endl;
    cout << endl;
    Search(arrayDouble, sizeArrayRows, sizeArrayColumn);
    cout << endl;
    cout << endl;
    Search(arrayFloat, sizeArrayRows, sizeArrayColumn);
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

    cout << "Select an action : ";  cin >> value;

    switch (value)
    {

    case 1:
        cout << "Sum of the array elements : " << endl;
        cout << "int    : " << Sum(arrayInt, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "double : " << Sum(arrayDouble, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "float  : " << Sum(arrayFloat, sizeArrayRows, sizeArrayColumn) << endl;
        break;

    case 2:
        cout << "Arithmetic mean of the array elements :" << endl;
        cout << "int    : " << Avg(arrayInt, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "double : " << Avg(arrayDouble, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "float  : " << Avg(arrayFloat, sizeArrayRows, sizeArrayColumn) << endl;
        break;

    case 3:
        cout << "Minimum value of the array : " << endl;
        cout << "int    : " << MinValueIn(arrayInt, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "double : " << MinValueIn(arrayDouble, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "float  : " << MinValueIn(arrayFloat, sizeArrayRows, sizeArrayColumn) << endl;
        break;

    case 4:
        cout << "Maximum value of the array : " << endl;
        cout << "int    : " << MaxValueIn(arrayInt, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "double : " << MaxValueIn(arrayDouble, sizeArrayRows, sizeArrayColumn) << endl;
        cout << "float  : " << MaxValueIn(arrayFloat, sizeArrayRows, sizeArrayColumn) << endl;
        break;

    case 5:
        cout << "5.Perform a cyclic shift of the array by a specified number of elements to left : " << endl;

        arrayContainerInt = ShiftLeft(arrayInt, sizeArrayRows, sizeArrayColumn);
        cout << "Type int" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << arrayContainerInt[i][j] << "  ";
            }
            cout << endl;

        }

        
        arrayContainerDouble = ShiftLeft(arrayDouble, sizeArrayRows, sizeArrayColumn);
        
        cout << "Type double" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
            
                cout << arrayContainerDouble[i][j] << "  ";
 
            }
            cout << endl;
        }
        cout << endl;

        arrayContainerFloat = ShiftLeft(arrayFloat, sizeArrayRows, sizeArrayColumn);
        cout << "Type float" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << arrayContainerFloat[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;
        break;

    case 6:
        cout << "6.Perform a cyclic shift of the array by a specified number of elements to right :" << endl;
        ///*  arr = ShiftRight(arrayInt, sizeArrayRows);*/
        //cout << endl;
        //for (int i = 0; i < sizeArrayRows; i++)
        //{
        //    cout << arr[i] << "\t";
        //}

        ShiftRight(arrayInt, sizeArrayRows, sizeArrayColumn);
        break;

    case 7:
        cout << "7.Sort the array through Bubble sorting :" << endl;

       /* arrayContainerInt = Sort(arrayInt, sizeArrayRows, sizeArrayColumn);
        cout << "Type int" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << arrayContainerInt[i][j] << "  ";
            }
            cout << endl;
        }*/
        arrayContainerInt= Sort(arrayInt, sizeArrayRows, sizeArrayColumn);
        cout << "Type int" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << arrayContainerInt[i][j] << "  ";
            }
            cout << endl;

        }

        cout << Sort(arrayInt, sizeArrayRows, sizeArrayColumn) << "\t";


        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << Sort(arrayInt, sizeArrayRows, sizeArrayColumn) << "\t";
            }
            cout << endl;

        }


        cout << endl;

        arrayContainerDouble = Sort(arrayDouble, sizeArrayRows, sizeArrayColumn);
        cout << "Type double" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << arrayContainerDouble[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;

        arrayContainerFloat = Sort(arrayFloat, sizeArrayRows, sizeArrayColumn);
        cout << "Type float" << endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                cout << arrayContainerFloat[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;

        break;

    case 8:
        int minValue, maxValue;
        cout << "Enter the minimum range value - "; cin >> minValue;
        cout << "Enter the maximum range value - "; cin >> maxValue;

        UinqueRand(arrayInt, minValue, maxValue, sizeArrayRows, sizeArrayColumn);
        /*      cout << "Type int" << endl;
              for (int i = 0; i < sizeArrayRows; i++)
              {
                  for (int j = 0; j < sizeArrayColumn; j++)
                  {
                      cout << arrayContainerInt[i][j] << "  ";
                  }
                  cout << endl;
              }
              cout << endl;
              */
        break;

    case 9:
        cout << "9.Find dublicate values in the array and display them on the screen " << endl;

      
        cout << "Type int" << endl;
        Search(arrayInt, sizeArrayRows, sizeArrayColumn);
        cout << endl;
        cout << "Type double" << endl;
        cout << endl;
        Search(arrayDouble, sizeArrayRows, sizeArrayColumn);
        cout << "Type float" << endl;
        Search(arrayFloat, sizeArrayRows, sizeArrayColumn);

       
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

int** NewArrayInt(int sizeArrayRows, int sizeArrayColumn)
{
    int** valueArray;

    valueArray = new int* [sizeArrayRows];

    for (int i = 0; i < sizeArrayRows; i++)
    {

        valueArray[i] = new int[sizeArrayColumn];

    }

    return valueArray;
}

int** NewArrayInt_2(int sizeArrayRows, int sizeArrayColumn)
{
    int** valueArray;

    valueArray = new int* [sizeArrayRows];

    for (int i = 0; i < sizeArrayRows; i++)
    {

        valueArray[i] = new int[sizeArrayColumn];

    }

    return valueArray;
}

double** NewArrayDouble(const int sizeArrayRows, const int sizeArrayColumn)
{
    double** valueArray;

    valueArray = new double* [sizeArrayRows];

    for (int i = 0; i < sizeArrayRows; i++)
    {

        valueArray[i] = new double[sizeArrayColumn];

    }

    return valueArray;
}

float** NewArrayFloat(const int sizeArrayRows, const int sizeArrayColumn)
{
    float** valueArray;

    valueArray = new float* [sizeArrayRows];

    for (int i = 0; i < sizeArrayRows; i++)
    {

        valueArray[i] = new float[sizeArrayColumn];

    }

    return valueArray;
}

char** NewArrayChar(const int sizeArrayRows, const int sizeArrayColumn)
{
    char** valueArray;

    valueArray = new char* [sizeArrayRows];

    for (int i = 0; i < sizeArrayRows; i++)
    {

        valueArray[i] = new char[sizeArrayColumn];

    }

    return valueArray;
}

void FillRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayColumn)
{
    srand(time(NULL));

    if (minValue > maxValue)
    {
        int buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;



    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);

        }
    }

}

void FillRand(double** array, double minValue, double maxValue, const int sizeArrayRows, const int sizeArrayColumn)
{
    srand(time(NULL));

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
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
            array[i][j] /= 100;
        }

    }

}

void FillRand(float** array, float minValue, float maxValue, const int sizeArrayRows, const int sizeArrayColumn)
{
    srand(time(NULL));

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
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
            array[i][j] /= 100;
        }

    }
}

void FillRand(char** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayColumn)
{
    srand(time(NULL));

    if (minValue > maxValue)
    {
        int buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;


    }
    if (minValue == maxValue)minValue++;

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            array[i][j] = minValue + rand() % (maxValue - minValue);

        }
    }

}

void Print(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âûâîäèò ìàññèâ íà ýêðàí
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }
}

void Print(double** array, const int sizeArrayRows, const int sizeArrayColumn) //âûâîäèò ìàññèâ íà ýêðàí
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }
}

void Print(float** array, const int sizeArrayRows, const int sizeArrayColumn) //âûâîäèò ìàññèâ íà ýêðàí
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

void Print(char** array, const int sizeArrayRows, const int sizeArrayColumn) //âûâîäèò ìàññèâ íà ýêðàí
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            cout << array[i][j] << "  ";

        }
        cout << endl;
    }

}

int  Sum(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ñóììó ýëåìåíòîâ ìàññèâà
{
    int sum = 0;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayColumn; j++)

            sum += array[i][j];

    return sum;
}

double  Sum(double** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ñóììó ýëåìåíòîâ ìàññèâà
{
    double sum = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayColumn; j++)

            sum += array[i][j];

    return sum;
}

float  Sum(float** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ñóììó ýëåìåíòîâ ìàññèâà
{
    float sum = 0.0f;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayColumn; j++)

            sum += array[i][j];

    return sum;
}

int Avg(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà
{

    int temp = 0;
    int sumElemnts = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (sizeArrayRows * sizeArrayColumn);

        }
    }

    return sumElemnts;
}

double Avg(double** array, int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà
{

    double temp = 0.0;
    double sumElemnts = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (sizeArrayRows * sizeArrayColumn);
        }
    }

    return sumElemnts;
}

float Avg(float** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ñðåäíåå-àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà
{

    float temp = 0.0;
    float sumElemnts = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (sizeArrayRows * sizeArrayColumn);

        }
    }

    return sumElemnts;
}

int MinValueIn(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå èç ìàññèâà
{

    int minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
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

double MinValueIn(double** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå èç ìàññèâà
{

    double minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
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

float MinValueIn(float** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ìèíèìàëüíîå çíà÷åíèå èç ìàññèâà
{

    float minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
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

int MaxValueIn(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå èç ìàññèâà
{

    int minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
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

double MaxValueIn(double** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå èç ìàññèâà
{
    double minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
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

float MaxValueIn(float** array, const int sizeArrayRows, const int sizeArrayColumn) //âîçâðàùàåò ìàêñèìàëüíîå çíà÷åíèå èç ìàññèâà
{

    float minElement = array[0][0];
    int cell = 0;
    int cell1 = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
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

int** ShiftLeft(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âëåâî
{
    int value;

    cout << "Cycle shift left" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        for (int j = 0; j < sizeArrayRows; j++)
        {
            int temp = array[j][0];

            for (int g = 0; g < sizeArrayColumn-1; g++)
            {

                array[j][g] = array[j][g + 1];
            }

            array[j][sizeArrayColumn - 1] = temp;
        }
    }

    return array;
}

double** ShiftLeft(double** array, const int sizeArrayRows, const int sizeArrayColumn) //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âëåâî
{
    int value;

    cout << "Cycle shift left" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {


        for (int j = 0; j < sizeArrayRows; j++)
        {
            int temp = array[j][0];

            for (int g = 0; g < sizeArrayColumn - 1; g++)
            {

                array[j][g] = array[j][g + 1];
            }

            array[j][sizeArrayColumn - 1] = temp;
        }
    }

    return array;
}

float** ShiftLeft(float** array, const int sizeArrayRows, const int sizeArrayColumn) //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âëåâî
{
    int value;

    cout << "Cycle shift left" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {


        for (int j = 0; j < sizeArrayRows; j++)
        {
            int temp = array[j][0];

            for (int g = 0; g < sizeArrayColumn - 1; g++)
            {

                array[j][g] = array[j][g + 1];
            }

            array[j][sizeArrayColumn - 1] = temp;
        }
    }

    return array;
}

void ShiftRight(int** array, const int sizeArrayRows, const int sizeArrayColumn) //âûïîëíÿåò öèêëè÷åñêèé ñäâèã ìàññèâà íà çàäàííîå ÷èñëî ýëåìåíòîâ âïðàâî
{
    int value;
    cout << "Cycle shift right" << endl;
    cout << "Enter the number if items : "; cin >> value;

    for (int i = 0; i < value; i++)
    {
        for (int j = sizeArrayColumn; j >= 0; j--) {


            int  buffer = array[j][sizeArrayColumn - 1];

            for (int g = sizeArrayRows - 1; g >= 0; g--)
            {
                array[j][g] = array[j][g - 1];
            }
            array[j][0] = buffer;
       
        }
    }

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)


            cout << array[i][j] << "  ";
        cout << endl;

    }
}

int** Sort(int** array, const int sizeArrayRows, const int sizeArrayColumn)  //âûïîëíÿåò ñîðòèðîâêó ìàññèâà â ïîðÿäêå âîçðàñòàíèÿ
{

    int emptyValue;

    for (int k = 0; k < sizeArrayRows; ++k) {

        for (int l = 0; l < sizeArrayColumn; ++l)
        {

            for (int i = 0; i < sizeArrayColumn; ++i)
            {
                for (int j = 0; j < sizeArrayColumn; ++j)
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
    return array;
}

double** Sort(double** array, const int sizeArrayRows, const int sizeArrayColumn)  //âûïîëíÿåò ñîðòèðîâêó ìàññèâà â ïîðÿäêå âîçðàñòàíèÿ
{

    double emptyValue;

    for (int k = 0; k < sizeArrayRows; ++k) {

        for (int l = 0; l < sizeArrayColumn; ++l)
        {
            for (int i = 0; i < sizeArrayRows; ++i)
            {
                for (int j = 0; j < sizeArrayColumn; ++j)
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

    return array;
}

float** Sort(float** array, const int sizeArrayRows, const int sizeArrayColumn)  //âûïîëíÿåò ñîðòèðîâêó ìàññèâà â ïîðÿäêå âîçðàñòàíèÿ
{

    float emptyValue;

    for (int k = 0; k < sizeArrayRows; ++k) {

        for (int l = 0; l < sizeArrayColumn; ++l)
        {
            for (int i = 0; i < sizeArrayRows; ++i)
            {
                for (int j = 0; j < sizeArrayColumn; ++j)
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

    return array;
}

void UinqueRand(int** array, int minValue, int maxValue,  int const sizeArrayRows,  int const sizeArrayColumn)  //çàïîëíÿåò ìàññèâ óíèêàëüíûìè ñëó÷àéíûìè ÷èñëàìè â çàäàííîì äèàïàçîíå
{
    const int const SIZE = 5 * 5;
    
    int Rew[SIZE];
    //заполнение массива REW
    bool hasalraedy;
    int RandomVelue;
    srand(time(NULL));

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
            array[i][j] = Rew[c];
            c++;
        }
    }

    //вывод массива
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }
}

void Search(int** array, const int sizeArrayRows, const int sizeArrayColumn)  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
{
    int type = 0;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            for (int l = i; l < sizeArrayRows; l++)
            {
                for (int k = j + 1; k < sizeArrayColumn; k++)

                    if (array[i][j] == array[l][k])
                    {
                        cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << endl;
                    }
            }
        }
    }
}

void Search(double** array, const int sizeArrayRows, const int sizeArrayColumn)  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            for (int l = i; l < sizeArrayRows; l++)
            {
                for (int k = j + 1; k < sizeArrayColumn; k++)
                    
                    if (array[i][j] == array[l][k])
                    {
                        cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << endl;
                    } 
            }
        }
    }
}

void Search(float** array, const int sizeArrayRows, const int sizeArrayColumn)  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            for (int l = i; l < sizeArrayRows; l++)
            {
                for (int k = j + 1; k < sizeArrayColumn; k++)
                    
                    if (array[i][j] == array[l][k])
                    {
                        cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << endl;
                    }
            }
        }
    }
}
