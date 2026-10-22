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

int ReadPower(string Message)
{
	int M = 0;
	do
	{
		cout << Message << endl;
		cin >> M;
	} while (M < 0);
	return M;
}
int PowerOfM(int M ,int Number)
{
	if (M == 0)
	{
		//Any number Power to zero gives 1
		return 1;
	}

	int Pow = 1;
	for (int counter = 1;counter<=M;counter++)
	{
		Pow = Pow * Number;
	}
	return Pow;
}
int main()
{
	cout << PowerOfM(ReadPower("Enter The Power"), ReadPositiveNumber("Enter a Positive Number")) << endl;

	return 0;
}