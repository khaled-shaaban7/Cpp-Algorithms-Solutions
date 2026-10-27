#include <iostream>
#include <cmath>

using namespace std;

string ReadPinCode()
{
    string PinCode;

    cout << "Please Enter Pin Code" << endl;
    cin >> PinCode;


    return PinCode ;
}

bool Login()
{
    string PinCode;

    do
    {
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return 1;
        }

        cout << "Wrong PIN" << endl;
        system("color 4F");

    } while (PinCode != "1234");

    return 0;
}

void PrintBalance()
{
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 45000 << endl;
    }
}

int main()
{
    PrintBalance();

    return 0;
}
