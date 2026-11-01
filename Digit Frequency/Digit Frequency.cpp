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

void DigitFrequency(int Number2 ,int Number )
{
    int Reminder = 0, Sum = 0;

    while (Number > 0)
    {
        Reminder = Number % 10;

        Number = Number / 10;
        
        if (Reminder == Number2)
            Sum += 1;

    }
    
    cout << "Digit " << Number2 << " Frequency is " << Sum << " Time(s)." <<endl;

}

int main()
{
    DigitFrequency(ReadPositiveNumber("Enter a Positive Number 2 " ) , ReadPositiveNumber("Enter a Positive Number "));    
}

