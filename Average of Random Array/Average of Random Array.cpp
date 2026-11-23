#include <iostream>
#include <string>
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


void FillArrayWithRandomNumbers(int& arrLength, int array[100])
{
    cout << "Please enter How many element do you want to enter?\n";
    cin >> arrLength;



    for (int i = 0;i < arrLength;i++)
    {

        array[i] = RandomNumber(1, 100);
    }
    cout << endl;
}





void PrintArray(int arrLength, int array[100])
{


    for (int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
}

int SumArray(int array[100], int arrLength)
{
    int Sum = 0;


    for (int i = 0;i < arrLength;i++)
    {
        Sum += array[i];

    }
    return Sum;
}

float ArrayAverage(int array[100], int arrLength)
{
    return (float)SumArray(array, arrLength) / arrLength;
}

int main()
{

    srand((unsigned)time(NULL));


    int array[100], arrLength;


    FillArrayWithRandomNumbers(arrLength, array);






    cout << "Array Elements : ";
    PrintArray(arrLength, array);

    cout << endl;

    cout << "\nAverage of all number is : " << ArrayAverage(array, arrLength) << endl;




    return 0;
}

