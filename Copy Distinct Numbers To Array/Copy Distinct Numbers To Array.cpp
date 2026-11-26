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

int FindNumberPositionInArray(int arr[], int arrLength, int Number)

{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }

    return -1;
}

bool IsNumberInArray(int arr[], int arrLength, int Number)
{
    return FindNumberPositionInArray(arr, arrLength, Number) != -1;
}


void AddArrayElement(int arr[], int& arrLength, int Number)
{
    arr[arrLength++] = Number;
}


void CopyDistinctNumbersToArray(int arrSource[], int arrLength, int arrDestination[], int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
           if(!IsNumberInArray(arrDestination , arr2Length , arrSource[i]))
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
    

    int arr[MaxSize]{10 ,10 , 10 , 50 , 50 , 70 , 50 , 70 , 70 , 90 , 10 ,50};

    int  arr2[MaxSize], arrLength = 12, arr2Length = 0;

    cout << "\nArray 1 elements : \n";
    PrintArray(arr, arrLength);

    cout << endl;

    CopyDistinctNumbersToArray(arr, arrLength, arr2, arr2Length);

    cout << "\nArray 2 distinct elements : \n";
    PrintArray(arr2, arr2Length);

    cout << endl;

    return 0;
}