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

int MyFloor(float Number)
{
    int IntPart = int(Number);

    if (Number < 0 && Number != IntPart)
        return IntPart - 1;

    return IntPart;
}
int main()
{
    float Number = ReadNumber("Please enter a number?");

    cout << "\nMy Floor Result : " << MyFloor(Number) << endl;

    cout << "\nC++ Floor Result : " << floor(Number) << endl;

    return 0;
}