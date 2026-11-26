#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(sqrt(Number));

    if (Number == 1)
        return enPrimeNotPrime::NotPrime;

    for (int counter = 2;counter <= M;counter++)
    {
        if (Number % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}


void AddArrayElement(int arr[], int& arrLength, int Number)
{
    arr[arrLength++] = Number;
}


void CopyPrimeNumbers(int arrSource[], int arrLength, int arrDestination[], int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime (arrSource[i]) == enPrimeNotPrime :: Prime )
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

    CopyPrimeNumbers(arr, arrLength, arr2, arr2Length);

    cout << "\nArray 2 Prime numbers : \n";
    PrintArray(arr2, arr2Length);

    cout << endl;

    return 0;
}