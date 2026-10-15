#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
	float SquareSide;

	cout << "Please enter Square Side " << endl;
	cin >> SquareSide;

	return SquareSide;
}

float CircleAreaInscribedInASquare(float SquareSide)
{
	const float PI = 3.14159265;

	return (PI * pow(SquareSide, 2)) / 4;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{

	PrintResults(CircleAreaInscribedInASquare(ReadSquareSide()));

	return 0;
}