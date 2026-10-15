#include <iostream>
#include <cmath>

using namespace std;

float ReadRadius()
{
	float Radius;

	cout << "Please enter Radius " << endl;
	cin >> Radius;

	return Radius;
}

float CircleArea(float Radius)
{
	const float PI = 3.14159265;

	return  pow(Radius, 2) * PI;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
		
	PrintResults(CircleArea(ReadRadius()));

	return 0;
}