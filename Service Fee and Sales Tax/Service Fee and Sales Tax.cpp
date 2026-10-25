#include <iostream>


using namespace std;


float ReadPositiveNumber(string Message)
{
    float Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter The Total Bill");
    

    cout << "\nTotal Bill = " << TotalBill << endl;
   
    cout << "\n*******************************************\n";

    cout << "Total Bill After Service And Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;


    return 0;
}
