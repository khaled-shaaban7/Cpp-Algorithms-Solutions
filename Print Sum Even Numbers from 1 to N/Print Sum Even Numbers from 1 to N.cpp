#include <iostream>

using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
    int Number;

    cout << "Please Enter a Number " << endl;
    cin >> Number;

    return Number;
}

enOddOrEven CheckOddOrEven(int Number) {
    if (Number % 2 != 0)
    {
        return enOddOrEven::Odd;
    }
    else
    {
        return enOddOrEven::Even;
    }
}

int SumEvenNumbersFrom1toN_UsingWhile(int Number)
{
    int counter = 0;
    int sum = 0;

    cout << "Sum Even Numbers using While Statement: \n";

    while (counter < Number)
    {
        counter++;
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }

    }
    return sum;
}
int SumEvenNumbersFrom1toN_UsingDoWhile(int Number)
{
    int counter = 0;
    int sum = 0;
    cout << "Sum Even Numbers using Do..While Statement: \n";

    do
    {
        counter++;
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }

    } while (counter < Number);
    return sum;
}
int SumEvenNumbersFrom1toN_UsingFor(int Number)
{
    int sum = 0;
    cout << "Sum Even Numbers using For Statement: \n";

    for (int counter = 1;counter <= Number;counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }
    }
    return sum;
}
int main()
{
    int Number = ReadNumber();

    cout << SumEvenNumbersFrom1toN_UsingWhile(Number) << endl;
    cout << SumEvenNumbersFrom1toN_UsingDoWhile(Number) << endl;
    cout << SumEvenNumbersFrom1toN_UsingFor(Number) << endl;

    return 0;
}
