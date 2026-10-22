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
void PowerOf2_3_4(int Number)
{
	int Pow2,Pow3,Pow4;

	Pow2 = Number * Number;
	
	Pow3 = Number * Number * Number;

	Pow4 = Number * Number * Number *Number;


	cout << Pow2 << " " << Pow3 << " " << Pow4 << endl;
}
int main()
{
	PowerOf2_3_4(ReadPositiveNumber("Enter a Positive Number"));

	return 0;
}