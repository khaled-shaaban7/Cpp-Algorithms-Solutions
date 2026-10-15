#include <iostream>
using namespace std;

void ReadNumbers(float& Length, float& Width)
{
	cout << "Please enter rectangle Length " << endl;
	cin >> Length;

	cout << "Please enter Width" << endl;
	cin >> Width;
}

float CalculateRectangleArea(float Length ,float Width)
{
	return Length * Width;
}
void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}
int main()
{
	float Length, Width;
	ReadNumbers(Length , Width );
	PrintResults(CalculateRectangleArea(Length , Width ));

	return 0;
}