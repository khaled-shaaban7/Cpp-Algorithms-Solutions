#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>

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
        array[i] = RandomNumber(1, 100);
    }

}

int FindNumberPositionInArray(int arr[], int arrLength, int Number)

{
    for (int i = 0; i < arrLength; i++)
    {
        if(arr[i] == Number)
        return i;
    }
    
    return -1;
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


    int arr[MaxSize];

    int arrLength = ReadNumberInRange("Enter number of elements (1-" + to_string(MaxSize) + ")", 1, MaxSize);

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 elements : \n";
    PrintArray(arr, arrLength);

    cout << endl;



    int Number =  ReadPositiveNumber("Please enter a number to search for ?");
    cout << "\nNumber you are looking for is : " << Number << "\n";

    short NumberPosition = FindNumberPositionInArray(arr, arrLength, Number);

    


    if (NumberPosition == -1)
    {

        cout << "The number is not found :-( \n";

    }
    else
    {

        cout << "The number found at position : " << NumberPosition << "\n";
        cout << "The number found iTs order : " << NumberPosition + 1 << "\n";
        
    }
    

    return 0;
}
