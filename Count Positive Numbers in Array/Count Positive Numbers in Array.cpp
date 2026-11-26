#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MaxSize = 100;

int ReadNumberInRange(const string& Message, int From, int To)
{
    int Number;

    while (true)
    {
        cout << Message << endl;

        if (cin >> Number && Number >= From && Number <= To)
            return Number;

        cin.clear();
        cin.ignore(numeric_limits <streamsize>::max(), '\n');

        cout << "Invalid input! Please enter a number between "
            << From << " and " << To << ".\n";

    }

}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}



int PositiveCount(int arr[], int arrLength)
{
    int PositiveCounter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] >= 0)
            PositiveCounter++;
    }
    return PositiveCounter;
}

void PrintArray(const int arr[], int arrLength)
{


    for (int i = 0;i < arrLength;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[MaxSize], arrLength = 0;

    arrLength = ReadNumberInRange("Enter number of elements (1-" + to_string(MaxSize) + ")", 1, MaxSize);

    FillArrayWithRandomNumbers(arr, arrLength);


    cout << "\nArray 1 elements : \n";
    PrintArray(arr, arrLength);

    cout << endl;

    cout << "\Positive Number count is : ";
    cout << PositiveCount(arr, arrLength) << endl;


    return 0;
}