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

void PrintInvertedLetterPattern(int Number)
{
    cout << endl;

    for (int i = 1;i <= Number;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            cout << char('A' + i - 1);
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number "));
    return 0;
}
