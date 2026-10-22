#include <iostream>
using namespace std;

int ReadNumberInRange(int From, int To)
{
	int Grade;
	do
	{
		cout << "Enter a Number between " << From << " and " << To << endl;
		cin >> Grade;
	} while (Grade < From || Grade > To);
	
	return Grade;
}
char GetGradeLetter(int Grade)
{
	if (Grade >= 85)
		return 'A';
	else if (Grade >= 75)
		return'B';
	else if (Grade >= 65)
		return'C';
	else if (Grade >= 50)
		return'D';
	else
		return'F';
}

int main(){

	char Grade = GetGradeLetter(ReadNumberInRange(1, 100));

	cout << "\n Result = " << Grade << endl;
	return 0;
}