#include <iostream>
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
        cin.ignore(numeric_limits <streamsize>::max(), '\n');

        cout << "Invalid input! Please enter a number\n";
            
    }

}

float MyAbs(float Number)
{
    if (Number < 0)
        return - Number;
    
    return Number;
}

int main()
{
    float Number = ReadNumber("Please enter a number?");

    cout << "\nMy abs Result : " << MyAbs(Number) << endl;
   
    cout << "\nC++ abs Result : " << abs(Number) << endl;
    
    return 0;
}