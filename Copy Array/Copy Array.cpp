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

void CopyArray(int arrLength, int arraySource[100], int arrayDestination[100])
{
    for (int i = 0;i < arrLength;i++)
    {

        arrayDestination[i] = arraySource[i];
    }
    cout << endl;
}

int main()
{

    srand((unsigned)time(NULL));


    int array[100], arrLength;


    FillArrayWithRandomNumbers(arrLength, array);

    cout << "Array 1 Elements : \n";
    PrintArray(arrLength, array);

    cout << endl;

    int array2[100];

    CopyArray(arrLength, array, array2);

    cout << "Array 2 Elements after copy : \n";
    PrintArray(arrLength, array2);

    cout << endl;





    return 0;
}

