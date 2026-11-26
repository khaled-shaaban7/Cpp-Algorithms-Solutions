#include <iostream>
#include <string>

using namespace std;

const int MaxSize = 100;

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
bool DoYouWantToAddMore()
{
    bool AddMore;
    cout << "\nDo you want to add more number? [0]No , [1]yes ?";
    cin >> AddMore;

    return AddMore;
}

void AddArrayElement(int arr[], int& arrLength, int Number)
{
    arr[arrLength++] = Number;
}
void InputUserNumbersInArray(int arr[], int& arrLength)
{
    do {

        AddArrayElement (arr , arrLength , ReadPositiveNumber("\nPlease enter a number?"));
                
    } while (DoYouWantToAddMore());
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

    int arr[MaxSize] , arrLength = 0;

    
    InputUserNumbersInArray(arr, arrLength);

    cout << "\nArray Length " << arrLength << endl;

    cout << "\nArray elements : \n";
    PrintArray(arr, arrLength);


    cout << endl;
    

    return 0;
}