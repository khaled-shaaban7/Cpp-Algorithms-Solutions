#include <iostream>

using namespace std;

const int MaxSize = 100;

bool IsPalindromeArray(int arr[], int arrLength)
{
    

    for (int i = 0; i < arrLength / 2 ; i++)
    {
        if (arr[i] != arr[arrLength - 1 - i])
            return false;
    }
    return true;
}
void PrintPalindromeResult(bool IsPalindrome)
{
    if (IsPalindrome)
    {
        cout << "\nYes array is palindrome\n";
    }
    else
    {
        cout << "\nNo array is NOT palindrome\n";
    }
}

void PrintArray(const int arr[], int arrLength)
{
    for (int i = 0;i < arrLength ;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[MaxSize]{ 10, 20, 30,  20 , 10};

    int  arrLength = 5;

    cout << "\nArray 1 elements : \n";
    PrintArray(arr, arrLength);

    cout << endl;

    PrintPalindromeResult(IsPalindromeArray(arr, arrLength));
   
    return 0;
}