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

int SumOfDigits(int Number)
{
    int Reminder = 0, Sum = 0;

    while (Number > 0)
    {
        Reminder = Number % 10;
        Number = Number / 10;
        Sum  += Reminder;
    }
    return Sum;
}


int main()
{
    int Sum = SumOfDigits(ReadPositiveNumber("Enter a Positive Number"));
    cout << "\nSum Of Digits = " << Sum << endl;
}

