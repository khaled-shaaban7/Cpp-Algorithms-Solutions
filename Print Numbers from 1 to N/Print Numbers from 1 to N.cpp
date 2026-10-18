#include <iostream>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please Enter a Number " << endl;
    cin >> Number;

    return Number;
}

void PrintRangeFrom1toN_UsingWhile(int Number)
{
    int counter = 0;

    cout << "Range Printed using While Statement: \n";

    while (counter < Number)
    {
        counter++;
        cout << counter << endl;

    }
}
void PrintRangeFrom1toN_UsingDoWhile(int Number)
{
    int counter = 0;

    cout << "Range Printed using Do..While Statement: \n";

    do 
    {
        counter++;
        cout << counter << endl;

    }while (counter < Number);
}
void PrintRangeFrom1toN_UsingFor(int Number)
{
    cout << "Range Printed using For Statement: \n";

    for (int counter = 1;counter <= Number;counter++)
    {
        cout << counter << endl;
    }

}
int main()
{
    int Number = ReadNumber();

    PrintRangeFrom1toN_UsingWhile(Number );
    PrintRangeFrom1toN_UsingDoWhile(Number );
    PrintRangeFrom1toN_UsingFor(Number );
}
