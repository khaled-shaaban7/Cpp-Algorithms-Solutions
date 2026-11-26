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
        arr[i] = RandomNumber(1, 100);
}



void AddArrayElement(int arr[], int& arrLength, int Number)
{
    arr[arrLength++] = Number;
}


void CopyOddNumbers(int arrSource[], int arrLength, int arrDestination[], int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        if(arrSource[i] % 2 != 0)
        AddArrayElement(arrDestination, arr2Length, arrSource[i]);
    }
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

    int arr[MaxSize], arr2[MaxSize], arrLength = 0, arr2Length = 0;

    arrLength = ReadNumberInRange("Enter number of elements (1-" + to_string(MaxSize) + ")", 1, MaxSize);

    FillArrayWithRandomNumbers(arr, arrLength);


    cout << "\nArray 1 elements : \n";
    PrintArray(arr, arrLength);

    cout << endl;

    CopyOddNumbers(arr, arrLength, arr2, arr2Length);



    cout << "\nArray 2 odd numbers : \n";
    PrintArray(arr2, arr2Length);

    cout << endl;

    return 0;
}