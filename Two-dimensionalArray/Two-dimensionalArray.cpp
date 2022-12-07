#include <iostream>
#include <Windows.h>

int** NewArrayInt(const int ROWS, const int COLUMNS);
double** NewArrayDouble(const int ROWS, const int COLUMNS);
float** NewArrayFloat(const int ROWS, const int COLUMNS);
char** NewArrayChar(const int ROWS, const int COLUMNS);
int** NewArrayInt_2(const int ROWS, const int COLUMNS);

void FillRand(int** array, int minValue, int maxValue, const int ROWS, const int COLUMNS);
void FillRand(double** array, double minValue, double maxValue, const int ROWS, const int COLUMNS);
void FillRand(float** array, float minValue, float maxValue, const int ROWS, const int COLUMNS);
void FillRand(char** array, int minValue, int maxValue, const int ROWS, const int COLUMNS);

void Print(int** array, const int ROWS, const int COLUMNS);
void Print(double** array, const int ROWS, const int COLUMNS);
void Print(float** array, const int ROWS, const int COLUMNS);
void Print(char** array, const int ROWS, const int COLUMNS);

int Sum(int** array, const int ROWS, const int COLUMNS);
double Sum(double** array, const int ROWS, const int COLUMNS);
float Sum(float** array, const int ROWS, const int COLUMNS);

int Avg(int** array, const int ROWS, const int COLUMNS);
double Avg(double**, const int ROWS, const int COLUMNS);
float Avg(float** array, const int ROWS, const int COLUMNS);

int MinValueIn(int** array, const int ROWS, const int COLUMNS);
double MinValueIn(double** array, const int ROWS, const int COLUMNS);
float MinValueIn(float** array, const int ROWS, const int COLUMNS);

int MaxValueIn(int** array, const int ROWS, const int COLUMNS);
double MaxValueIn(double** array, const int ROWS, const int COLUMNS);
float MaxValueIn(float** array, const int ROWS, const int COLUMNS);

int** ShiftLeft(int** array, const int ROWS, const int COLUMNS);
double** ShiftLeft(double** array, const int ROWS, const int COLUMNS);
float** ShiftLeft(float** array, const int ROWS, const int COLUMNS);

int** ShiftRight(int** array, const int ROWS, const int COLUMNS);
double** ShiftRight(double** array, const int ROWS, const int COLUMNS);
float** ShiftRight(float** array, const int ROWS, const int COLUMNS);

int** Sort(int** array, const int ROWS, const int COLUMNS);
double** Sort(double** array, const int ROWS, const int COLUMNS);
float** Sort(float** array, const int ROWS, const int COLUMNS);

int** UinqueRand(int** array, int minValue, int maxValue, const int ROWS, const int COLUMNS);
double** UinqueRand(double** array, int minValue, int maxValue, const int ROWS, const int COLUMNS);
float** UinqueRand(float** array, int minValue, int maxValue, const int ROWS, const int COLUMNS);

void Search(int** array, const int ROWS, const int COLUMNS);
void Search(double** array, const int ROWS, const int COLUMNS);
void Search(float** array, const int ROWS, const int COLUMNS);

int main()
{

    const int ROWS = 5;
    const int COLUMNS = 5;

    int value;
    int minValue; std::cout << "Enter the minimum range value - "; std::cin >> minValue;
    int maxValue; std::cout << "Enter the maximum range value - "; std::cin >> maxValue;

    int** array_2;
    array_2 = NewArrayInt_2(ROWS, COLUMNS);

    int** arrayInt;
    arrayInt = NewArrayInt(ROWS, COLUMNS);

    double** arrayDouble;
    arrayDouble = NewArrayDouble(ROWS, COLUMNS);

    float** arrayFloat;
    arrayFloat = NewArrayFloat(ROWS, COLUMNS);

    char** arrayChar;
    arrayChar = NewArrayChar(ROWS, COLUMNS);

    int** arrayContainerInt;
    double** arrayContainerDouble;
    float** arrayContainerFloat;

    FillRand(arrayInt, minValue, maxValue, ROWS, COLUMNS);
    FillRand(arrayDouble, minValue, maxValue, ROWS, COLUMNS);
    FillRand(arrayFloat, minValue, maxValue, ROWS, COLUMNS);
    FillRand(arrayChar, minValue, maxValue, ROWS, COLUMNS);

    std::cout << "Output of an array with a data type int : " << std::endl;
    Print(arrayInt, ROWS, COLUMNS);
    std::cout << std::endl;
    std::cout << "Output of an array with a data type double : " << std::endl;
    Print(arrayDouble, ROWS, COLUMNS);
    std::cout << std::endl;
    std::cout << "Output of an array with a data type float : " << std::endl;
    Print(arrayFloat, ROWS, COLUMNS);
    std::cout << std::endl;
    std::cout << "Output of an array with a data type char : " << std::endl;
    Print(arrayChar, ROWS, COLUMNS);
    std::cout << std::endl;

    std::cout << "1.Return the sum of the array elements \n"
        "2.Return the arithmetic mean of the array elements\n"
        "3.Return the minimum value of the array \n"
        "4.Return the maximum value of the array\n"
        "5.Perform a cyclic shift of the array by a specified number of elements to left \n"
        "6.Perform a cyclic shift of the array by a specified number of elements to right\n"
        "7.Sort the array through Bubble sorting\n"
        "8.Fills an array with unique random numbers in a given range\n"
        "9.Find dublicate values in the array and display them on the screen\n"
        << std::endl;
    std::cout << std::endl;
    std::cout << "Select an action : ";  std::cin >> value;

    switch (value)
    {

    case 1:
        std::cout << "Sum of the array elements : " << std::endl;
        std::cout << "int    : " << Sum(arrayInt, ROWS, COLUMNS) << std::endl;
        std::cout << "double : " << Sum(arrayDouble, ROWS, COLUMNS) << std::endl;
        std::cout << "float  : " << Sum(arrayFloat, ROWS, COLUMNS) << std::endl;
        break;

    case 2:
        std::cout << "Arithmetic mean of the array elements :" << std::endl;
        std::cout << "int    : " << Avg(arrayInt, ROWS, COLUMNS) << std::endl;
        std::cout << "double : " << Avg(arrayDouble, ROWS, COLUMNS) << std::endl;
        std::cout << "float  : " << Avg(arrayFloat, ROWS, COLUMNS) << std::endl;
        break;

    case 3:
        std::cout << "Minimum value of the array : " << std::endl;
        std::cout << "int    : " << MinValueIn(arrayInt, ROWS, COLUMNS) << std::endl;
        std::cout << "double : " << MinValueIn(arrayDouble, ROWS, COLUMNS) << std::endl;
        std::cout << "float  : " << MinValueIn(arrayFloat, ROWS, COLUMNS) << std::endl;
        break;

    case 4:
        std::cout << "Maximum value of the array : " << std::endl;
        std::cout << "int    : " << MaxValueIn(arrayInt, ROWS, COLUMNS) << std::endl;
        std::cout << "double : " << MaxValueIn(arrayDouble, ROWS, COLUMNS) << std::endl;
        std::cout << "float  : " << MaxValueIn(arrayFloat, ROWS, COLUMNS) << std::endl;
        break;

    case 5:
        std::cout << "5.Perform a cyclic shift of the array by a specified number of elements to left : " << std::endl;
        arrayContainerInt = ShiftLeft(arrayInt, ROWS, COLUMNS);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }

        arrayContainerDouble = ShiftLeft(arrayDouble, ROWS, COLUMNS);
        std::cout << "Type double" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {

                std::cout << arrayContainerDouble[i][j] << "  ";

            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        arrayContainerFloat = ShiftLeft(arrayFloat, ROWS, COLUMNS);
        std::cout << "Type float" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerFloat[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;

    case 6:
        std::cout << "6.Perform a cyclic shift of the array by a specified number of elements to right :" << std::endl;
        arrayContainerInt = ShiftRight(arrayInt, ROWS, COLUMNS);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;
        }

        arrayContainerDouble = ShiftRight(arrayDouble, ROWS, COLUMNS);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }

        arrayContainerFloat = ShiftRight(arrayFloat, ROWS, COLUMNS);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }


        break;

    case 7:
        std::cout << "7.Sort the array through Bubble sorting :" << std::endl;

        arrayContainerInt = Sort(arrayInt, ROWS, COLUMNS);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }

        arrayContainerDouble = Sort(arrayDouble, ROWS, COLUMNS);
        std::cout << "Type double" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerDouble[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        arrayContainerFloat = Sort(arrayFloat, ROWS, COLUMNS);
        std::cout << "Type float" << "\n";
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
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

        arrayContainerInt = UinqueRand(arrayInt, minValue, maxValue, ROWS, COLUMNS);
        std::cout << "Type int" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerInt[i][j] << "  ";
            }
            std::cout << std::endl;

        }

        arrayContainerDouble = UinqueRand(arrayDouble, minValue, maxValue, ROWS, COLUMNS);
        std::cout << "Type double" << std::endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerDouble[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        arrayContainerFloat = UinqueRand(arrayFloat, minValue, maxValue, ROWS, COLUMNS);
        std::cout << "Type float" << "\n";
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                std::cout << arrayContainerFloat[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;

    case 9:
        std::cout << "9.Find dublicate values in the array and display them on the screen " << std::endl;
        std::cout << "Type int" << std::endl;
        Search(arrayInt, ROWS, COLUMNS);
        std::cout << std::endl;
        std::cout << "Type double" << std::endl;
        std::cout << std::endl;
        Search(arrayDouble, ROWS, COLUMNS);
        std::cout << "Type float" << std::endl;
        Search(arrayFloat, ROWS, COLUMNS);


        break;

    default:
        break;
    }

    for (int i = 0; i < ROWS; i++)
    {
        delete[] arrayInt[i];
    }

    for (int i = 0; i < ROWS; i++)
    {
        delete[] arrayDouble[i];
    }

    for (int i = 0; i < ROWS; i++)
    {
        delete[] arrayFloat[i];
    }

    for (int i = 0; i < ROWS; i++)
    {
        delete[] arrayChar[i];
    }

}

int** NewArrayInt(int ROWS, int COLUMNS)
{
    int** valueArray;

    valueArray = new int* [ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        valueArray[i] = new int[COLUMNS];
    }

    return valueArray;
}

int** NewArrayInt_2(int ROWS, int COLUMNS)
{
    int** valueArray;

    valueArray = new int* [ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        valueArray[i] = new int[COLUMNS];
    }

    return valueArray;
}

double** NewArrayDouble(const int ROWS, const int COLUMNS)
{
    double** valueArray;

    valueArray = new double* [ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        valueArray[i] = new double[COLUMNS];
    }

    return valueArray;
}

float** NewArrayFloat(const int ROWS, const int COLUMNS)
{
    float** valueArray;

    valueArray = new float* [ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        valueArray[i] = new float[COLUMNS];
    }

    return valueArray;
}

char** NewArrayChar(const int ROWS, const int COLUMNS)
{
    char** valueArray;

    valueArray = new char* [ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        valueArray[i] = new char[COLUMNS];
    }

    return valueArray;
}

void FillRand(int** array, int minValue, int maxValue, const int ROWS, const int COLUMNS)
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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
        }
    }
}

void FillRand(double** array, double minValue, double maxValue, const int ROWS, const int COLUMNS)
{
    srand(time(NULL));

    maxValue *= 100;
    minValue *= 100;

    if (minValue > maxValue)
    {
        double buffer = minValue;
        minValue = maxValue;
        maxValue = buffer;
    }
    if (minValue == maxValue)
        minValue++;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
            array[i][j] /= 100;
        }
    }
}

void FillRand(float** array, float minValue, float maxValue, const int ROWS, const int COLUMNS)
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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = minValue + rand() % int(maxValue - minValue);
            array[i][j] /= 100;
        }
    }
}

void FillRand(char** array, int minValue, int maxValue, const int ROWS, const int COLUMNS)
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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = minValue + rand() % (maxValue - minValue);
        }
    }
}

void Print(int** array, const int ROWS, const int COLUMNS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

void Print(double** array, const int ROWS, const int COLUMNS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

void Print(float** array, const int ROWS, const int COLUMNS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

void Print(char** array, const int ROWS, const int COLUMNS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

int  Sum(int** array, const int ROWS, const int COLUMNS)
{
    int sum = 0;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLUMNS; j++)

            sum += array[i][j];

    return sum;
}

double  Sum(double** array, const int ROWS, const int COLUMNS)
{
    double sum = 0.0;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLUMNS; j++)

            sum += array[i][j];

    return sum;
}

float  Sum(float** array, const int ROWS, const int COLUMNS)
{
    float sum = 0.0f;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLUMNS; j++)

            sum += array[i][j];

    return sum;
}

int Avg(int** array, const int ROWS, const int COLUMNS)
{
    int temp = 0;
    int sumElemnts = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (ROWS * COLUMNS);
        }
    }

    return sumElemnts;
}

double Avg(double** array, int ROWS, const int COLUMNS)
{
    double temp = 0.0;
    double sumElemnts = 0.0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (ROWS * COLUMNS);
        }
    }

    return sumElemnts;
}

float Avg(float** array, const int ROWS, const int COLUMNS)
{
    float temp = 0.0;
    float sumElemnts = 0.0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            temp += array[i][j];
            sumElemnts = temp / (ROWS * COLUMNS);
        }
    }

    return sumElemnts;
}

int MinValueIn(int** array, const int ROWS, const int COLUMNS)
{
    int minElement = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (array[i][j] < minElement)
            {
                minElement = array[i][j];
            }
        }
    }

    return minElement;
}

double MinValueIn(double** array, const int ROWS, const int COLUMNS)
{
    double minElement = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (array[i][j] < minElement)
            {
                minElement = array[i][j];
            }
        }
    }

    return minElement;
}

float MinValueIn(float** array, const int ROWS, const int COLUMNS)
{
    float minElement = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (array[i][j] < minElement)
            {
                minElement = array[i][j];
            }
        }
    }

    return minElement;
}

int MaxValueIn(int** array, const int ROWS, const int COLUMNS)
{
    int minElement = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (array[i][j] > minElement)
            {
                minElement = array[i][j];
            }
        }
    }

    return minElement;
}

double MaxValueIn(double** array, const int ROWS, const int COLUMNS)
{
    double minElement = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (array[i][j] > minElement)
            {
                minElement = array[i][j];
            }
        }
    }

    return minElement;
}

float MaxValueIn(float** array, const int ROWS, const int COLUMNS)
{
    float minElement = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (array[i][j] > minElement)
            {
                minElement = array[i][j];
            }
        }
    }

    return minElement;
}

int** ShiftLeft(int** array, const int ROWS, const int COLUMNS)
{
    int value;

    std::cout << "Cycle shift left" << std::endl;
    std::cout << "Enter the number if items : "; std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            int buffer = array[i][0];

            for (int j = 0; j < COLUMNS - 1; j++)
            {

                array[i][j] = array[i][j + 1];
            }

            array[i][COLUMNS - 1] = buffer;
        }
    }

    return array;
}

double** ShiftLeft(double** array, const int ROWS, const int COLUMNS)
{
    int value;

    std::cout << "Cycle shift left" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            double buffer = array[i][0];

            for (int j = 0; j < COLUMNS - 1; j++)
            {

                array[i][j] = array[i][j + 1];
            }

            array[i][COLUMNS - 1] = buffer;
        }
    }

    return array;
}

float** ShiftLeft(float** array, const int ROWS, const int COLUMNS)
{
    int value;

    std::cout << "Cycle shift left" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            float buffer = array[i][0];

            for (int j = 0; j < COLUMNS - 1; j++)
            {
                array[i][j] = array[i][j + 1];
            }

            array[i][COLUMNS - 1] = buffer;
        }
    }

    return array;
}

int** ShiftRight(int** array, const int ROWS, const int COLUMNS)
{
    int value;
    std::cout << "Cycle shift right" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        for (int i = ROWS - 1; i > 0; i--)
        {
            int buffer = array[i][COLUMNS - 1];

            for (int j = COLUMNS - 1; j >= 0; j--)
            {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = buffer;
        }
    }

    return array;
}

double** ShiftRight(double** array, const int ROWS, const int COLUMNS)
{
    int value;
    std::cout << "Cycle shift right" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        for (int i = ROWS - 1; i > 0; i--)
        {
            int buffer = array[i][COLUMNS - 1];

            for (int j = COLUMNS - 1; j >= 0; j--)
            {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = buffer;
        }
    }

    return array;
}

float** ShiftRight(float** array, const int ROWS, const int COLUMNS)
{
    int value;
    std::cout << "Cycle shift right" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    for (int k = 0; k < value; k++)
    {
        for (int i = ROWS - 1; i > 0; i--)
        {
            int buffer = array[i][COLUMNS - 1];

            for (int j = COLUMNS - 1; j >= 0; j--)
            {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = buffer;
        }
    }

    return array;
}


int** ShiftRight(int** array, const int ROWS, const int COLUMNS)
{
    int value;
    std::cout << "Cycle shift right" << std::endl;
    std::cout << "Enter the number if items : ";  std::cin >> value;

    int sizeArray = 5;
    for (int k = 0; k < value; k++)
    {
        for (int i = sizeArray - 1; i > 0; i--)
        {
            int buffer = array[i][sizeArray - 1];

            for (int j = sizeArray - 1; j >= 0; j--)
            {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = buffer;
        }
    }

    return array;
}


int** Sort(int** array, const int ROWS, const int COLUMNS)
{
    int emptyValue;

    for (int k = 0; k < ROWS; ++k) {

        for (int l = 0; l < COLUMNS; ++l)
        {
            for (int i = 0; i < ROWS; ++i)
            {
                for (int j = 0; j < COLUMNS; ++j)
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

double** Sort(double** array, const int ROWS, const int COLUMNS)
{
    double emptyValue;

    for (int k = 0; k < ROWS; ++k) {

        for (int l = 0; l < COLUMNS; ++l)
        {
            for (int i = 0; i < ROWS; ++i)
            {
                for (int j = 0; j < COLUMNS; ++j)
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

float** Sort(float** array, const int ROWS, const int COLUMNS)
{

    float emptyValue;

    for (int k = 0; k < ROWS; ++k) {

        for (int l = 0; l < COLUMNS; ++l)
        {
            for (int i = 0; i < ROWS; ++i)
            {
                for (int j = 0; j < COLUMNS; ++j)
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

int** UinqueRand(int** array, int minValue, int maxValue, const int ROWS, const int COLUMNS) //
{
    const int const SIZE = ROWS * COLUMNS;

    int* rewSize = new int[SIZE];

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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = rewSize[cyceleValue];
            cyceleValue++;
        }
    }

    return array;
}

double** UinqueRand(double** array, int minValue, int maxValue, const int ROWS, const int COLUMNS) //
{
    const int const SIZE = ROWS * COLUMNS;

    double* rewSize = new double[SIZE];

    bool hasalraedy;
    double randomValue;
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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = rewSize[cyceleValue];
            cyceleValue++;
        }
    }

    return array;
}

float** UinqueRand(float** array, int minValue, int maxValue, const int ROWS, const int COLUMNS) //
{
    const int const SIZE = ROWS * COLUMNS;

    float* rewSize = new float[SIZE];

    bool hasalraedy;
    float randomValue;
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

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = rewSize[cyceleValue];
            cyceleValue++;
        }
    }

    return array;
}

void Search(int** array, const int ROWS, const int COLUMNS)  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            for (int l = i; l < ROWS; l++)
            {
                for (int k = j + 1; k < COLUMNS; k++)

                    if (array[i][j] == array[l][k])
                    {
                        std::cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << std::endl;
                    }
            }
        }
    }
}

void Search(double** array, const int ROWS, const int COLUMNS)  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            for (int l = i; l < ROWS; l++)
            {
                for (int k = j + 1; k < COLUMNS; k++)

                    if (array[i][j] == array[l][k])
                    {
                        std::cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << std::endl;
                    }
            }
        }
    }
}

void Search(float** array, const int ROWS, const int COLUMNS)  //íàõîäèò â ìàññèâå ïîâòîðÿþøèåñÿ çíà÷åíèÿ, âûâîäèò èõ íà ýêðàí
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            for (int l = i; l < ROWS; l++)
            {
                for (int k = j + 1; k < COLUMNS; k++)

                    if (array[i][j] == array[l][k])
                    {
                        std::cout << "mass[" << i << "][ " << j << "] == mass[ " << l << "][" << k << "]" << array[i][j] << std::endl;
                    }
            }
        }
    }
}