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
int Factorial(int Number)
{
	int Factorial = 1;
	
	for (int counter = Number;counter >= 1;counter--)
	{
		Factorial = Factorial * counter;
	}
	return Factorial;
}
int main()
{
	cout << Factorial(ReadPositiveNumber("Enter a Positive Number"));

	return 0;
}