#include <iostream>
#include <cmath>
using namespace std;
void PrintTableHeader()
{
    cout << "\n\n\t\t\t\t Multiplication Table From " << 1 << " To " << 10 << "\n\n";

    cout << "\t";

    for (int Counter = 1; Counter <= 10; Counter++)
    {
        cout  << Counter<<"\t";

    }
    cout << "\n___________________________________________________________________________________________________\n";

}

string ColumSperator(int Counter)
{
    if (Counter < 10)
        return"   |";
    else
        return "  |";

}
void PrintMultiplicationTable()
{

    PrintTableHeader();
    for (int Counter = 1; Counter <= 10;Counter++)
    {
        
        cout <<" "<< Counter <<ColumSperator(Counter) <<"\t";
        for (int i = 1;i <= 10;i++) {
            cout << Counter * i <<"\t";
        }
        cout << endl;
      
    }
}

int main()
{
    PrintMultiplicationTable();
}
