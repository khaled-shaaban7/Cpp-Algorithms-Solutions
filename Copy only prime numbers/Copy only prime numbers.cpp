#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };


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


void FillArrayWithRandomNumbers(int& arrLength, int array[])
{
    cout << "Please enter How many element do you want to enter?\n";
    cin >> arrLength;



    for (int i = 0;i < arrLength;i++)
    {

        array[i] = RandomNumber(1, 100);
    }
    cout << endl;
}





void PrintArray(int arrLength, int array[])
{


    for (int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
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

void CopyOnlyPrimeNumbers(int arrSource[] , int arrDestination[] , int arrLength , int &arr2Length)
{
    

    for (int i = 0; i < arrLength;i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestination[arr2Length] = arrSource[i];
            arr2Length++;
        }
        
    }
    
}



int main()
{

    srand((unsigned)time(NULL));


    int array[100], arrLength;


    FillArrayWithRandomNumbers(arrLength, array);

    cout << "Array 1 Elements : \n";
    PrintArray(arrLength, array);

    cout << endl;

    int array2[100] , arr2Length = 0;

    CopyOnlyPrimeNumbers( array, array2 , arrLength , arr2Length );

    cout << "Prime Numbers in Array2:\n";
    PrintArray(arr2Length, array2);

    cout << endl;





    return 0;
}

