#include <iostream>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

float ReadNumber(const string& Message)
{
    float Number;

    while (true)
    {
        cout << Message << endl;

        if (cin >> Number)
            return Number;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid input! Please enter a number\n";
    }

}

float MyAbs(float Number)
{
    if (Number < 0)
        return -Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)
{
    int IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if (MyAbs(FractionPart) >= 0.5)
    {
        if (Number > 0)
            return IntPart + 1;
        else
            return IntPart - 1;
    }

    return IntPart;
    
}
int main()
{
    float Number = ReadNumber("Please enter a number?");

    cout << "\nMy Round Result : " << MyRound(Number) << endl;

    cout << "\nC++ Round Result : " << round(Number) << endl;

    return 0;
}