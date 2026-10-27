#include <iostream>
#include <cmath>

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

float TotalMonth(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment");

    cout << "\nTotal Months to Pay = " << TotalMonth(LoanAmount, MonthlyInstallment) << " Months" << endl;

    return 0;
}
