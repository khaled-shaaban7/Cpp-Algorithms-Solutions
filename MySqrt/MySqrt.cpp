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

float MySqrt(float Number)
{
    return pow(Number, 0.5);
}
int main()
{
    float Number = ReadNumber("Please enter a number?");

    cout << "\nMy Sqrt Result : " << MySqrt(Number) << endl;

    cout << "\nC++ Sqrt Result : " << sqrt(Number) << endl;

    return 0;
}