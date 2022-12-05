
// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>


int** NewArrayInt(const int sizeArrayRows, const int sizeArrayCows);
double** NewArrayDouble(const int sizeArrayRows, const int sizeArrayCows);
float** NewArrayFloat(const int sizeArrayRows, const int sizeArrayCows);
char** NewArrayChar(const int sizeArrayRows, const int sizeArrayCows);
int** NewArrayInt_2(const int sizeArrayRows, const int sizeArrayCows);

void FillRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(double** array, double minValue, double maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(float** array, float minValue, float maxValue, const int sizeArrayRows, const int sizeArrayCows);
void FillRand(char** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);

void Print(int** array, const int sizeArrayRows, const int sizeArrayCows); 
void Print(double** array, const int sizeArrayRows, const int sizeArrayCows); 
void Print(float** array, const int sizeArrayRows, const int sizeArrayCows); 
void Print(char** array, const int sizeArrayRows, const int sizeArrayCows); 

int Sum(int** array, const int sizeArrayRows, const int sizeArrayCows); 
double Sum(double** array, const int sizeArrayRows, const int sizeArrayCows); 
float Sum(float** array, const int sizeArrayRows, const int sizeArrayCows); 

int Avg(int** array, const int sizeArrayRows, const int sizeArrayCows); 
double Avg(double**, const int sizeArrayRows, const int sizeArrayCows); 
float Avg(float** array, const int sizeArrayRows, const int sizeArrayCows); 

int MinValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows); 
double MinValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows); 
float MinValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows); 

int MaxValueIn(int** array, const int sizeArrayRows, const int sizeArrayCows); 
double MaxValueIn(double** array, const int sizeArrayRows, const int sizeArrayCows); 
float MaxValueIn(float** array, const int sizeArrayRows, const int sizeArrayCows); 

int** ShiftLeft(int** array, const int sizeArrayRows, const int sizeArrayCows); 
double** ShiftLeft(double** array, const int sizeArrayRows, const int sizeArrayCows); 
float** ShiftLeft(float** array, const int sizeArrayRows, const int sizeArrayCows); 

int** ShiftRight(int** array, const int sizeArrayRows, const int sizeArrayCows);

int** Sort(int** array, const int sizeArrayRows, const int sizeArrayCows); 
double** Sort(double** array, const int sizeArrayRows, const int sizeArrayCows); 
float** Sort(float** array, const int sizeArrayRows, const int sizeArrayCows); 

void UinqueRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayCows);

void Search(int** array, const int sizeArrayRows, const int sizeArrayCows);  
void Search(double** array, const int sizeArrayRows, const int sizeArrayCows);
void Search(float** array, const int sizeArrayRows, const int sizeArrayCows);

int main()
{

    const int sizeArrayRows = 5;
    const int sizeArrayColumn = 5;
    int value;

    int minValue=1; /*std::cout << "Enter the minimum range value - "; std::cin >> minValue;*/
    int maxValue=100; /*std::cout << "Enter the maximum range value - "; std::cin >> maxValue;*/

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

    std::cout << "Output of an array with a data type int : " << std::endl;
    Print(arrayInt, sizeArrayRows, sizeArrayColumn);
    arrayContainerInt = ShiftRight(arrayInt, sizeArrayRows, sizeArrayColumn);
    std::cout << "Type int" << std::endl;
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            std::cout << arrayContainerInt[i][j] << "  ";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;
    //std::cout << "Output of an array with a data type double : " << std::endl;
    //Print(arrayDouble, sizeArrayRows, sizeArrayColumn);
    //std::cout << std::endl;
    //std::cout << "Output of an array with a data type float : " << std::endl;
    //Print(arrayFloat, sizeArrayRows, sizeArrayColumn);
    //std::cout << std::endl;
    //std::cout << "Output of an array with a data type char : " << std::endl;
    //Print(arrayChar, sizeArrayRows, sizeArrayColumn);
    //std::cout << std::endl;
    //std::cout << "SEARCH" << std::endl;
    //Search(arrayInt, sizeArrayRows, sizeArrayColumn);
    //std::cout << std::endl;
    //std::cout << std::endl;
    //Search(arrayDouble, sizeArrayRows, sizeArrayColumn);
    //std::cout << std::endl;
    //std::cout << std::endl;
    //Search(arrayFloat, sizeArrayRows, sizeArrayColumn);
    //std::cout << std::endl;

    //std::cout << "1.Return the sum of the array elements \n"
    //        "2.Return the arithmetic mean of the array elements\n"
    //        "3.Return the minimum value of the array \n"
    //        "4.Return the maximum value of the array\n"
    //        "5.Perform a cyclic shift of the array by a specified number of elements to left \n"
    //        "6.Perform a cyclic shift of the array by a specified number of elements to right\n"
    //        "7.Sort the array through Bubble sorting\n"
    //        "8.Fills an array with unique random numbers in a given range\n"
    //        "9.Find dublicate values in the array and display them on the screen\n"
    //    << std::endl;
    //std::cout << std::endl;

    std::cout << "Select an action : ";  std::cin >> value;

    switch (value)
    {

    case 1:
        std::cout << "Sum of the array elements : " << std::endl;
        std::cout << "int    : " << Sum(arrayInt, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "double : " << Sum(arrayDouble, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "float  : " << Sum(arrayFloat, sizeArrayRows, sizeArrayColumn) << std::endl;
        break;

    case 2:
        std::cout << "Arithmetic mean of the array elements :" << std::endl;
        std::cout << "int    : " << Avg(arrayInt, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "double : " << Avg(arrayDouble, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "float  : " << Avg(arrayFloat, sizeArrayRows, sizeArrayColumn) << std::endl;
        break;

    case 3:
        std::cout << "Minimum value of the array : " << std::endl;
        std::cout << "int    : " << MinValueIn(arrayInt, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "double : " << MinValueIn(arrayDouble, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "float  : " << MinValueIn(arrayFloat, sizeArrayRows, sizeArrayColumn) << std::endl;
        break;

    case 4:
        std::cout << "Maximum value of the array : " << std::endl;
        std::cout << "int    : " << MaxValueIn(arrayInt, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "double : " << MaxValueIn(arrayDouble, sizeArrayRows, sizeArrayColumn) << std::endl;
        std::cout << "float  : " << MaxValueIn(arrayFloat, sizeArrayRows, sizeArrayColumn) << std::endl;
        break;

    case 5:
        std::cout << "5.Perform a cyclic shift of the array by a specified number of elements to left : " << std::endl;

        arrayContainerInt = ShiftLeft(arrayInt, sizeArrayRows, sizeArrayColumn);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }
        
        arrayContainerDouble = ShiftLeft(arrayDouble, sizeArrayRows, sizeArrayColumn);
        
        std::cout << "Type double" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
            
                std::cout << arrayContainerDouble[i][j] << "  ";
 
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        arrayContainerFloat = ShiftLeft(arrayFloat, sizeArrayRows, sizeArrayColumn);
        std::cout << "Type float" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << arrayContainerFloat[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;

    case 6:
        std::cout << "6.Perform a cyclic shift of the array by a specified number of elements to right :" << std::endl;
       
        arrayContainerInt = ShiftRight(arrayInt, sizeArrayRows, sizeArrayColumn);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }

        
        break;

    case 7:
        std::cout << "7.Sort the array through Bubble sorting :" << std::endl;

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
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }

        std::cout << Sort(arrayInt, sizeArrayRows, sizeArrayColumn) << "\t";


        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << Sort(arrayInt, sizeArrayRows, sizeArrayColumn) << "\t";
            }
            std::cout << std::endl;

        }


        std::cout << std::endl;

        arrayContainerDouble = Sort(arrayDouble, sizeArrayRows, sizeArrayColumn);
        std::cout << "Type double" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << arrayContainerDouble[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        arrayContainerFloat = Sort(arrayFloat, sizeArrayRows, sizeArrayColumn);
        std::cout << "Type float" << std::endl;
        for (int i = 0; i < sizeArrayRows; i++)
        {
            for (int j = 0; j < sizeArrayColumn; j++)
            {
                std::cout << arrayContainerFloat[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        break;

    case 8:
        int minValue, maxValue;
        std::cout << "Enter the minimum range value - "; std::cin >> minValue;
        std::cout << "Enter the maximum range value - "; std::cin >> maxValue;

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
        std::cout << "9.Find dublicate values in the array and display them on the screen " << std::endl;

      
        std::cout << "Type int" << std::endl;
        Search(arrayInt, sizeArrayRows, sizeArrayColumn);
        std::cout << std::endl;
        std::cout << "Type double" << std::endl;
        std::cout << std::endl;
        Search(arrayDouble, sizeArrayRows, sizeArrayColumn);
        std::cout << "Type float" << std::endl;
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
    if (minValue == maxValue)
        minValue++;



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
    if (minValue == maxValue)
        minValue++;


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
    if (minValue == maxValue)
        minValue++;


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

void Print(int** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            std::cout << array[i][j] << "  ";

        }
        std::cout << std::endl;
    }
}

void Print(double** array, const int sizeArrayRows, const int sizeArrayColumn) 
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            std::cout << array[i][j] << "  ";

        }
        std::cout << std::endl;
    }
}

void Print(float** array, const int sizeArrayRows, const int sizeArrayColumn) 
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            std::cout << array[i][j] << "  ";

        }
        std::cout << std::endl;
    }

}

void Print(char** array, const int sizeArrayRows, const int sizeArrayColumn) 
{

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {

            std::cout << array[i][j] << "  ";

        }
        std::cout << std::endl;
    }

}

int  Sum(int** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    int sum = 0;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayColumn; j++)

            sum += array[i][j];

    return sum;
}

double  Sum(double** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    double sum = 0.0;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayColumn; j++)

            sum += array[i][j];

    return sum;
}

float  Sum(float** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    float sum = 0.0f;
    for (int i = 0; i < sizeArrayRows; i++)
        for (int j = 0; j < sizeArrayColumn; j++)

            sum += array[i][j];

    return sum;
}

int Avg(int** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

double Avg(double** array, int sizeArrayRows, const int sizeArrayColumn) 
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

float Avg(float** array, const int sizeArrayRows, const int sizeArrayColumn)
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

int MinValueIn(int** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

double MinValueIn(double** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

float MinValueIn(float** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

int MaxValueIn(int** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

double MaxValueIn(double** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

float MaxValueIn(float** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

int** ShiftLeft(int** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    int value;

    std::cout << "Cycle shift left" << std::endl;
    std::cout << "Enter the number if items : "; std::cin >> value;
    
    for (int k = 0; k < value; k++)
    {

        for (int i = 0; i < sizeArrayRows; i++)
        {
            int buffer = array[i][0];

            for (int j = 0; j < sizeArrayColumn - 1; j++)
            {

                array[i][j] = array[i][j + 1];
            }

            array[i][sizeArrayColumn - 1] = buffer;
        }
    }

    return array;
}

double** ShiftLeft(double** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    int value;

    std::cout << "Cycle shift left" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {

        for (int i = 0; i < sizeArrayRows; i++)
        {
            double buffer = array[i][0];

            for (int j = 0; j < sizeArrayColumn - 1; j++)
            {

                array[i][j] = array[i][j + 1];
            }

            array[i][sizeArrayColumn - 1] = buffer;
        }
    }

    return array;
}

float** ShiftLeft(float** array, const int sizeArrayRows, const int sizeArrayColumn) 
{
    int value;

    std::cout << "Cycle shift left" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {

        for (int i = 0; i < sizeArrayRows; i++)
        {
            float buffer = array[i][0];

            for (int j = 0; j < sizeArrayColumn - 1; j++)
            {

                array[i][j] = array[i][j + 1];
            }

            array[i][sizeArrayColumn - 1] = buffer;
        }
    }

    return array;
}

int** ShiftRight(int** array, const int sizeArrayRows, const int sizeArrayColumn)
{
    int value;
    std::cout << "Cycle shift right" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        int buffer = array[sizeArrayRows-1][sizeArrayColumn - 1];

        for (int i = sizeArrayRows - 1; i > 0; i--)
        {
            for (int j = sizeArrayColumn-1 ; j >= 0; j--)
            {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = array[i - 1][sizeArrayColumn - 1];
           
        }
        array[0][0] = buffer;
    }

    return array;
    
}

int** Sort(int** array, const int sizeArrayRows, const int sizeArrayColumn)  
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

double** Sort(double** array, const int sizeArrayRows, const int sizeArrayColumn) 
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

float** Sort(float** array, const int sizeArrayRows, const int sizeArrayColumn)  
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

void UinqueRand(int** array, int minValue, int maxValue, const int sizeArrayRows, const int sizeArrayColumn) //
{
    const int const SIZE = sizeArrayRows * sizeArrayColumn;
    
    int* rewSize=new int [SIZE];

    bool hasalraedy;
    int randomValue;
    int cyceleValue = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; )
    {
        hasalraedy = false;
        randomValue = minValue + rand() % int(maxValue - minValue);
       
        for (int j = 0; j < i; j++)
        {

            if (rewSize[j] == randomValue)
            {
                hasalraedy = true;
                break;
            }
        }

        if (!hasalraedy)
        {
            rewSize[i] = randomValue;
            i++;
        }

    }
   
    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            array[i][j] = rewSize[cyceleValue];
           
            cyceleValue++;
        }
    }

    for (int i = 0; i < sizeArrayRows; i++)
    {
        for (int j = 0; j < sizeArrayColumn; j++)
        {
            std::cout << array[i][j] << '\t';
        }
        std::cout << std::endl;
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
                        std::cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << std::endl;
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
                        std::cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << std::endl;
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
                        std::cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << std::endl;
                    }
            }
        }
    }
}
