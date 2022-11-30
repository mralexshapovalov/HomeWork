
#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;

int Fib(int n);




int main() 
{
    int i;

    int m; cin >> m;

    for (i = 1; i <= 20; i++) {
     
       

        if (Fib(i) <= m) 
        {

            cout << "Fib(" << i << ") = " << Fib(i) << endl;
        }
    }


  
}



    int Fib(int n)
    {
        int returnValue;

        // handle the base case first;
        if (n == 1 or n == 2) {
            returnValue = 1;
        }
        else {
            returnValue = Fib(n - 1) + Fib(n - 2);
        }
        return returnValue;
    }


