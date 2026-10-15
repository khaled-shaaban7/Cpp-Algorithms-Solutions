#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter()
{
	float Diameter;

	cout << "Please enter Diameter " << endl;
	cin >> Diameter;

	return Diameter;
}

float CircleAreaByDiameter(float Diameter)
{
	const float PI = 3.14159265;

	return  (pow(Diameter, 2) * PI)/4;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{

	PrintResults(CircleAreaByDiameter(ReadDiameter()));

	return 0;
}