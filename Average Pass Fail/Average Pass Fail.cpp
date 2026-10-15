#include <iostream>
using namespace std;

enum enPassFail { Pass = 1,Fail=2 };

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
    return (float)Total / 3;
}

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
    {
        return enPassFail::Pass;
    }
    else
    {
        return enPassFail::Fail;
    }
}

void PrintResult(float Average)
{
    cout << "\n the Average is : " << Average << endl;

    if (CheckAverage(Average)==enPassFail ::Pass )
    {
        cout << "\n You Passed" << endl;
    }
    else
    {
        cout << "\n You Faild" << endl;
    }
}
int main()
{
    int arr[3];
    ReadThreeMarks(arr);
    PrintResult(CalculateAverage(SumThreeMarks(arr)));

    return 0;
}

