#include <iostream>
using namespace std;

void ReadThreeMarks(int arr[3])
{
    for (int i = 0;i <= 2;i++)
    {
        cout << "Please enter your Mark Number " << i + 1 << endl;
        cin >> arr[i];
    }
}
int SumThreeMarks(int arr[3])
{
    return arr[0] + arr[1] + arr[2];
}
float CalculateAverage(int Total)
{
    return Total/3;
}

void PrintTheAverage(int Average)
{
    cout << "\n the Average is : " << Average << endl;
}
int main()
{
    int arr[3];
    ReadThreeMarks(arr);
    PrintTheAverage(CalculateAverage(SumThreeMarks(arr)));

    return 0;
}

