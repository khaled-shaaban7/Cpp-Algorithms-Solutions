#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& TriangleSide1,float & TriangleSide2, float& TriangleBase)
{
	cout << "Please enter Triangle Side 1" << endl;
	cin >> TriangleSide1;
		
	cout << "Please enter Triangle Base" << endl;
	cin >> TriangleBase;

	cout << "Please enter Triangle Side 2" << endl;
	cin >> TriangleSide2;
	
}

float CircleAreaByATriangle(float TriangleSide1, float& TriangleSide2, float TriangleBase)
{
	const float PI = 3.14159265;

	float P ,T;

	P = (TriangleSide1 + TriangleBase + TriangleSide2) / 2;
	
	T = (TriangleSide1 * TriangleSide2 * TriangleBase) / (4 * sqrt(P * (P - TriangleSide1) * (P - TriangleSide2) * (P - TriangleBase)));

	return PI * pow(T, 2);
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	float TriangleSide1,TriangleSide2, TriangleBase;
	ReadTriangleData(TriangleSide1, TriangleSide2, TriangleBase);
	PrintResults(CircleAreaByATriangle(TriangleSide1, TriangleSide2 ,TriangleBase));

	return 0;
}