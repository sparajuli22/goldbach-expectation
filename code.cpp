//Satish Parajuli
//lm08
//nov 2 2019
//CS1 Section 3

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

bool primeCheck(int num)
{

    for (int i = 2; i <= num / 2; i++)
    {

        if (num % i == 0)
        {

            return false;
        }
    }

    return true;
}
int main()
{
    int a;
    cout << "Enter a number :";
    cin >> a;
    int counter = 0;
    for (int i = 2; i < a; i++)
    {
        if (primeCheck(i))
        {
            
            for (int j = i; j < a; j++)
            {
                
                if (primeCheck(j) && i + j == a)
                
                {
                    cout << i << " + " << j << " = " << a << endl;
                    counter++;
                }
            }
        }
    }
    cout << "Number of combinations = " << counter;
}
