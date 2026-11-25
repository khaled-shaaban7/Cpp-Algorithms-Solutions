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


void FillArrayWithOrderedNumbers(int array[] , int arrLength)
{




    for (int i = 0;i < arrLength;i++)
    {

        array[i] = i+1;
    }
    
}

void Swap(int& A, int& B)
{
    int Temp = 0;

    Temp = A;
    A = B;
    B = Temp;

}

void ShuffleArray(int array[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Swap(array[RandomNumber(1, arrLength) - 1], array[RandomNumber(1, arrLength) - 1]);
   }
}


void PrintArray(int array[] , int arrLength)
{


    for (int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
}






int main()
{

    srand((unsigned)time(NULL));


    int array[100];

    int arrLength = ReadPositiveNumber("Please enter How many element do you want to enter?");

    FillArrayWithOrderedNumbers(array , arrLength);
   
    cout << endl;


    cout << "Array elements before Shuffle : \n";
    PrintArray(array , arrLength);

    cout << endl;

    ShuffleArray(array, arrLength);

    cout << "Array elements after Shuffle  : \n";
    PrintArray(array , arrLength);

    cout << endl;

    return 0;
}

