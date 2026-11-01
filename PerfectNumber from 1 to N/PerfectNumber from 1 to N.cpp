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

void PrintPerfectNumbersFrom1ToN(int Number)
{
    for (int counter = 1;counter <= Number;counter++)
    {
        if (isPerfectNumber(counter))
            cout << counter << "\n";
    }
}



int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a Positive Number"));
}

