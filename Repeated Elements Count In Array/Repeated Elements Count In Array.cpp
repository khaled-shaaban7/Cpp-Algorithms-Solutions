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

void ReadArray(int &arrLength , int array[100])
{
    cout << "Please enter How many element do you whant to enter?\n";
    cin >> arrLength;
    
    cout << "\nEnter array elements:" << endl;

    for (int i = 0;i < arrLength;i++)
    {
        cout << "Elemnt [" << i + 1 << "]: ";
        cin >>array[i];
    }
    cout << endl;
}

int TimesRepeated(short NumberToCheck, int arrLength , int array[100])
{
    int  Frequency = 0;

    for (int i = 0;i < arrLength;i++) 
    {

        if (array[i] == NumberToCheck)
            Frequency++;

    }

    

    return Frequency;
}



void PrintArray(int arrLength , int array[100])
{
    

    for (int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[100] , arrLength , NumberToCheck;


    ReadArray(arrLength, array);


    NumberToCheck = ReadPositiveNumber("Please enter one digit to check");

    

    cout << "\nOriginal array : ";
    PrintArray(arrLength, array);

    


    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arrLength , array) << " Time(s).\n";

    return 0;
}

