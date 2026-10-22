#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
float GetComissionPercentage(float TotalSalas)
{
	if (TotalSalas >= 1000000)
		return 0.01;
	else if (TotalSalas >= 500000)
		return 0.2;
	else if (TotalSalas >= 100000)
		return 0.3;
	else if (TotalSalas >= 50000)
		return 0.5;
	else
		return 0;
}

float CalculateTotalComission(float TotalSalas)
{
	return GetComissionPercentage(TotalSalas) * TotalSalas;
}
int main()
{
	float TotalSales = ReadPositiveNumber("Enter a PositiveNumber");

	// Display the commission percentage.
	cout << endl << "Commission Percentage = " << GetComissionPercentage(TotalSales) * 100 << "%" << endl;

	// Display the total commission amount.
	cout << endl << "Total Commission = " << CalculateTotalComission(TotalSales) << endl;


	return 0;
}