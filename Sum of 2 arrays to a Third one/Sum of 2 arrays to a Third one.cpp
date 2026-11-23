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


void FillArrayWithRandomNumbers(int arrLength, int array[])
{
    



    for (int i = 0;i < arrLength;i++)
    {

        array[i] = RandomNumber(1, 100);
    }
    cout << endl;
}


void SumOf2Arrays(int array[], int array2[], int arraySum[], int arrLength)
{
    int Sum = 0;
    for (int i = 0;i < arrLength;i++)
    {
        arraySum[i] = array[i] + array2[i];
    }
}


void PrintArray(int arrLength, int array[])
{


    for (int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
}






int main()
{

    srand((unsigned)time(NULL));


    int array[100] , array2[100] , arraySum[100];

    int arrLength = ReadPositiveNumber("Please enter How many element do you want to enter?");

    FillArrayWithRandomNumbers(arrLength, array);


    FillArrayWithRandomNumbers(arrLength, array2);


    SumOf2Arrays(array, array2, arraySum, arrLength);

    cout << "Array 1 Elements : \n";
    PrintArray(arrLength, array);

    cout << endl;

    

   

    cout << "Array 2 Elements :\n";
    PrintArray(arrLength, array2);

    cout << endl;


    cout << "Sum of array1 and array2 elements :\n";
    PrintArray(arrLength, arraySum);

    cout << endl;


    return 0;
}

