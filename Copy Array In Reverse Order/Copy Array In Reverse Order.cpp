#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


int RandomNumber(int From, int To)
{
    int randNumber = rand() % (To - From + 1) + From;

    return randNumber;
}


void FillArrayWithRandomNumbers(int array[], int arrLength)
{

    for (int i = 0;i < arrLength;i++)
    {
        array[i] = RandomNumber(1,100);
    }

}


void CopyArrayInReverseOrder(int arraySource[], int arrayDestination[], int arrLength)
{
    int X = arrLength - 1;

    for (int i = 0; i < arrLength; i++)
    {
        arrayDestination[i] = arraySource[(X - i)];
    }
}

void PrintArray(int array[], int arrLength)
{


    for (int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
}



int main()
{

    srand((unsigned)time(NULL));


    int array[100] ,array2[100];

    int arrLength = ReadPositiveNumber("Please enter How many element do you want to enter?");

    FillArrayWithRandomNumbers(array, arrLength);

    


    cout << "\nArray 1 elements : \n";
    PrintArray(array, arrLength);

    cout << endl;

    CopyArrayInReverseOrder(array, array2 , arrLength);

    cout << "\nArray 2 elements after Copy Array 1 In Reverse Order : \n";
    PrintArray(array2, arrLength);

    cout << endl;

    return 0;
}

