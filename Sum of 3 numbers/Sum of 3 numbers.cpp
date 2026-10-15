#include <iostream>
using namespace std;

void ReadThreeNumbers(int arr[3])
{
    for (int i = 0;i <= 2;i++)
    {
        cout << "Please enter your Number " << i + 1 << endl;
        cin >> arr[i];
    }
}
int SumThreeNumbers(int arr[3])
{
    return arr[0] + arr[1] + arr[2];
}

void PrintTheSumOfThreeNumbers(int Total)
{
    cout << "the Total sum of Numbers is : " << Total << endl;
}
int main()
{
    int arr[3];
    ReadThreeNumbers(arr);
    PrintTheSumOfThreeNumbers(SumThreeNumbers((arr)));

    return 0;
}

