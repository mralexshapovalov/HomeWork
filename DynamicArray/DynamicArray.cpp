#include <iostream>
using namespace std;


//2. ¬ проект DynamicMemory добавить следующие функции :
//? ? ? insert(? ? ? );	//вставл€ет в массив указанное значение по указанному индексу
//? ? ? pop_back(? ? ? );	//удал€ет последний элемент из массива
//? ? ? pop_front(? ? ? );	//удал€ет нудевой элемент массива
//? ? ? erase(? ? ? );		//удал€ет элемент по указанному индексу


int* insert(int* arr, int& size, int value, int index); //вставл€ет в массив указанное значение по указанному индексу
int* pop_back(int* arr, int& size);//удал€ет последний элемент из массива
int* pop_front(int* arr, int& size);//удал€ет нудевой элемент массива
int* erase(int* arr, int& size, int index);//удал€ет элемент по указанному индексу

void FillRand(int arr[], int size);
void Print(int* arr, int size);
int* Push_back(int* arr, int& size, int value);
int* Push_front(int* arr, int& size, int value);

#define tab "\t"

int main()
{
    int value;
    int size = 5;

    int* arr = new int[size];

    FillRand(arr, size);
    std::cout << "Array output" << endl;
    Print(arr, size);
    cout << endl;
    std::cout << "Enter a value "; std::cin >> value;

    cout << "Add an element to the end of the array" << endl;
    cout << endl;
    arr = Push_back(arr, size, value);
    Print(arr, size);
    arr = Push_back(arr, size, value);
    Print(arr, size);
    cout << endl;
   
    cout << endl;
    cout << "Add an element to the front of the array" << endl;
    arr = Push_front(arr, size, value);
    Print(arr, size);
    arr = Push_front(arr, size, value);
    Print(arr, size);
    cout << endl;
   
    cout << endl;
    cout << "Add an element by array index" << endl;
    arr = insert(arr, size, 99, 3);
    Print(arr, size);
    cout << endl;
    arr = insert(arr, size, 12, 3);
    Print(arr, size);
    cout << endl;
    
    cout << endl;
    cout << "Delete the last element in the array" << endl;
    arr = pop_back(arr, size);
    Print(arr, size);
    cout << endl;
    arr = pop_back(arr, size);
    Print(arr, size);
    cout << endl;
  
    cout << endl;
    cout << "Delete the first element in the array" << endl;
    arr = pop_front(arr, size);
    Print(arr, size);
    cout << endl;
    arr = pop_front(arr, size);
    Print(arr, size);
    cout << endl;
   
    cout << endl;
    cout << "Delete an element by array index" << endl;
    arr = erase(arr, size, 1);
    Print(arr, size);
    cout << endl;
    arr = erase(arr, size, 1);
    Print(arr, size);

    delete[]arr;
}

void FillRand(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = rand() % 100;
    }
}

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << tab;
    }
}

int* Push_back(int* arr, int& n, int value)
{
 
    int* buffer = new int[n + 1];

    for (int i = 0; i < n; i++)
    {
        buffer[i] = arr[i];
    }

    delete[]arr;

    arr = buffer;

    arr[n] = value;

    n++;

    return arr;
}

int* Push_front(int* arr, int& n, int value)
{
    int* buffer = new int[n + 1];

    for (int i = 0; i < n; i++)
    {
        buffer[i + 1] = arr[i];
    }

    delete[]arr;
    arr = buffer;
    arr[0] = value;
    n++;

    return arr;
}

int* insert(int* arr, int& n, int value, int index) //вставл€ет в массив указанное значение по указанному индексу
{
    int* buffer = new int[n + 1];

    for (int i = 0; i < n; i++)
    {
        buffer[i < index ? i : i + 1] = arr[i];
    }

    buffer[index] = value;

    delete[]arr;

    arr = buffer;
    n++;

    return arr;
}

int* pop_back(int* arr, int& n)//удал€ет последний элемент из массива
{
    n--;
    int* buffer = new int[n];

    for (int i = 0; i < n; i++)
    {
        buffer[i] = arr[i];
    }

    delete[]arr;
    arr = buffer;

    return arr;
}

int* pop_front(int* arr, int& size)//удал€ет нудевой элемент массива
{
    int* buffer = new int[size - 1];

    for (int i = 1; i < size; i++)
    {
        buffer[i - 1] = arr[i];
    }

    delete[]arr;

    arr = buffer;
    size--;

    return arr;
}

int* erase(int* arr, int& size, int index)//удал€ет элемент по указанному индексу
{
    int* buffer = new int[size];

    for (int i = 0; i < size; i++)  buffer[i] = arr[i];

    for (int j = index; j < size - 1; j++) buffer[j] = arr[j + 1];

    delete[]arr;

    arr = buffer;
    size--;

    return arr;
}
