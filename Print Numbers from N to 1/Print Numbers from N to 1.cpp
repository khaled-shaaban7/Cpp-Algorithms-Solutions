#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please Enter a Number " << endl;
    cin >> Number;

    return Number;
}

void PrintRangeFromNto1_UsingWhile(int Number)
{
    int counter = Number;

    cout << "Range Printed using While Statement: \n";

    while (counter >= 1)
    {
        
        cout << counter << endl;
        counter--;

    }
}
void PrintRangeFromNto1_UsingDoWhile(int Number)
{
    int counter = Number;

    cout << "Range Printed using Do..While Statement: \n";

    do
    {
        cout << counter << endl;
        counter--;

    } while (counter >= 1);
}
void PrintRangeFromNto1_UsingFor(int Number)
{
    cout << "Range Printed using For Statement: \n";

    for (int counter = Number;counter >= 1;counter--)
    {
        cout << counter << endl;
    }

}
int main()
{
    int Number = ReadNumber();

    PrintRangeFromNto1_UsingWhile(Number);
    PrintRangeFromNto1_UsingDoWhile(Number);
    PrintRangeFromNto1_UsingFor(Number);

    return 0;
}
