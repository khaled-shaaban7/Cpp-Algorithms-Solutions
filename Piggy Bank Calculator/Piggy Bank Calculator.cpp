#include <iostream>

using namespace std;

struct stPiggyBankContenet
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
    stPiggyBankContenet PiggyBankContenet;
    cout << "Enter the Total Pennies " << endl;
    cin >> PiggyBankContenet.Pennies;
    cout << "Enter the Total Nickels " << endl;
    cin >> PiggyBankContenet.Nickels;
    cout << "Enter the Total Dimes " << endl;
    cin >> PiggyBankContenet.Dimes;
    cout << "Enter the Total Quarters " << endl;
    cin >> PiggyBankContenet.Quarters;
    cout << "Enter the Total Dollars " << endl;
    cin >> PiggyBankContenet.Dollars;

    return PiggyBankContenet;
 }

float CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
    float TotalPennies = 0;

    TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 + PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 + PiggyBankContenet.Dollars * 100;

    return TotalPennies;
}

int main()
{
    float TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());

    cout << endl << "Total Pennies = " << TotalPennies << endl;

    cout << endl << "Total Dollars = " << TotalPennies / 100 << endl;

    return 0;
}