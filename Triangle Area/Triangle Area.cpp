#include <iostream>
using namespace std;

void ReadNumbers(float& Base, float& Height)
{
	cout << "Please enter Triangle Base " << endl;
	cin >> Base;

	cout << "Please enter Triangle Height" << endl;
	cin >> Height;
}

float TriangleArea(float Base, float Height)
{
	float Area;
	Area = (Base/2)* Height;

	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Triangle Area = " << Area << endl;
}
int main()
{
	float Base, Height;
	ReadNumbers(Base, Height);
	PrintResults(TriangleArea(Base, Height));

	return 0;
}