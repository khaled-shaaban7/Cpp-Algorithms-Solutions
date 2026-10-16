#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference()
{
	float Circumference;

	cout << "Please enter Circumference " << endl;
	cin >> Circumference;

	return Circumference;
}

float CircleAreaByCircumference(float Circumference)
{
	const float PI = 3.14159265;

	return  pow(Circumference, 2)/(4* PI);
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{

	PrintResults(CircleAreaByCircumference(ReadCircumference()));

	return 0;
}