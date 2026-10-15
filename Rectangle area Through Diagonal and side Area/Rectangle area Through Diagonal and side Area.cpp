#include <iostream>
using namespace std;

void ReadNumbers(float& Side, float& Diagonal)
{
	cout << "Please enter rectangle Side " << endl;
	cin >> Side;

	cout << "Please enter rectangle Diagonal" << endl;
	cin >> Diagonal;
}

float CalculateRectangleAreaByDiagonalAndSideArea(float Side, float Diagonal)
{
	float Area;
	Area = Side * sqrt(pow(Diagonal, 2) - pow(Side, 2));
	
	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}
int main()
{
	float Side, Diagonal;
	ReadNumbers(Side, Diagonal);
	PrintResults(CalculateRectangleAreaByDiagonalAndSideArea(Side, Diagonal));

	return 0;
}