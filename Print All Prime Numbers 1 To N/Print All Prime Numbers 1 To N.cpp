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

void PrintPrimeNumbersFrom2ToN(int Number)
{
    cout << "\n";
    cout << "Prime Numbers from " << 2 << " To " << Number << " are : " << endl;


    for (int i = 2; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
            cout << i << endl;
     }
    
}

int main()
{

    PrintPrimeNumbersFrom2ToN( ReadPositiveNumber("Enter a Positive Number"));

    return 0;
}
