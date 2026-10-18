#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& TriangleSide, float& TriangleBase)
{
	cout << "Please enter Triangle Side " << endl;
	cin >> TriangleSide;

	cout << "Please enter Triangle Base" << endl;
	cin >> TriangleBase;
}

float CircleAreaByITriangle(float TriangleSide, float TriangleBase)
{
	const float PI = 3.14159265;

	return PI * (pow(TriangleBase, 2) / 4) * ((2 * TriangleSide - TriangleBase) / (2 * TriangleSide + TriangleBase));
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	float TriangleSide, TriangleBase;
	ReadTriangleData(TriangleSide, TriangleBase);
	PrintResults(CircleAreaByITriangle(TriangleSide, TriangleBase));

	return 0;
}