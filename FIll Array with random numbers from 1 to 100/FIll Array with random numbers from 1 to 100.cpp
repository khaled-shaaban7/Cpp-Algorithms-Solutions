#include <iostream>
#include <string>
using namespace std;


enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};


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
    cout << "Please enter How many element do you whant to enter?\n";
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

int main()
{

    srand((unsigned)time(NULL));


    int array[100], arrLength;


    FillArrayWithRandomNumbers(arrLength, array );


   



    cout << "Array Elements : ";
    PrintArray(arrLength, array);

    cout << endl;


    

    return 0;
}

