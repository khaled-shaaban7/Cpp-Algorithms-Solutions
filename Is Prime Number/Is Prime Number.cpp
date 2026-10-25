#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    { 
    cout << Message << endl;
    cin >> Number;
    } while (Number <= 0);

    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(sqrt(Number));

    if (Number == 1)
    return enPrimeNotPrime::NotPrime;

    for (int counter = 2;counter <= M;counter++)
    {
        if (Number % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimeNotPrime::Prime:
        cout << "\n the Number is Prime \n";
        break;
    case enPrimeNotPrime ::NotPrime :
        cout << "\n the Number is Not Prime \n";
        break;
    }
}

int main()
{

    PrintNumberType(ReadPositiveNumber("Enter a Positive Number"));

    return 0;
}
