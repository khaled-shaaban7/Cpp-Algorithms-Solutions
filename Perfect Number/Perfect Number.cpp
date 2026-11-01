#include <iostream>
#include <string>

using namespace std;


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

bool isPerfectNumber(int Number)
{
    int Sum = 0;

    for (int Counter = 1; Counter <= Number / 2;Counter++)
    {
        if (Number % Counter == 0)
            Sum += Counter;
    }
    return Number == Sum;
}

void PrintResult(int Number)
{
    if (isPerfectNumber(Number) == true)
        cout << Number << " it is a Perfect" << endl;
    else
        cout << Number <<" it is Not a Perfect Number" << endl;

   
}


int main()
{
    PrintResult(ReadPositiveNumber("Enter a Positive Number"));
}

