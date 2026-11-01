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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Reminder = 0, Frequency = 0;

    while (Number > 0)
    {
        Reminder = Number % 10;

        Number = Number / 10;

        if (Reminder == DigitToCheck)
            Frequency++;

    }

    return Frequency;
}

void PrintAllDigitFrequency( int Number)
{
    short DigitFrequency = 0;
    for (int i = 0;i < 10;i++)
    {
        DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency  > 0)
          
        cout << "\nDigit " << i << " Frequency is "
            << DigitFrequency  << " Time(s).\n";
    }
}
int main()
{
    int Number = ReadPositiveNumber("Please enter the main number ");

   

    PrintAllDigitFrequency(Number);
    
}

