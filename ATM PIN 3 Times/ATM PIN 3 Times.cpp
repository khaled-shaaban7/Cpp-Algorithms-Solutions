#include <iostream>
#include <cmath>

using namespace std;

string ReadPinCode()
{
    string PinCode;

    cout << "Please Enter Pin Code" << endl;
    cin >> PinCode;


    return PinCode;
}

bool Login()
{
    string PinCode;
    int counter = 3;
    do
    {
        PinCode = ReadPinCode();

        counter--;

        if (PinCode == "1234")
        {
            return 1;
        }
        system("color 4F");
        cout << "\nWrong PIN, you have "<<counter <<" more tries" << endl;
        

    } while (counter >=1 && PinCode != "1234");

    return 0;
}

void PrintBalance()
{
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 45000 << endl;
    }
    else
    {
        cout << "\nYour card is blocked. Call the bank for help." << endl;
    }
}

int main()
{
    PrintBalance();

    return 0;
}
