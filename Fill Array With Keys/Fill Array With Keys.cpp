#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

const int MaxSize = 100;

int ReadNumberInRange(const string &Message, int From, int To)
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

int RandomNumber(int From, int To)
{
    int randNumber = rand() % (To - From + 1) + From;

    return randNumber;
}

char GetRandomCharacter(enCharType CharType)
{

    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber('a', 'z'));

    case enCharType::CapitalLetter:
        return char(RandomNumber('A', 'Z'));

    case enCharType::SpecialCharacter:
        return char(RandomNumber('!', '/'));

    case enCharType::Digit:
        return char(RandomNumber('0', '9'));
    }

    return '\0';
}



string GenerateWord(enCharType CharType, int Length)
{
    string Word = "";

    for (int i = 0; i < Length; i++)
    {
        Word += GetRandomCharacter(CharType);
    }

    return Word;
}

string GenerateKey(int Parts = 4 , int PartLength = 4)
{
    string Key = "";

    for (int i = 0; i < Parts; i++)
    {
        Key += GenerateWord(enCharType::CapitalLetter, PartLength);

        if (i < Parts - 1)
            Key += "-";

    }

    return Key;
}

void FillArrayWithKeys(string arr[], int NumberOfKeys)
{
    for (int i = 0;i < NumberOfKeys;i++)
    {
        
        arr[i] = GenerateKey();
       
    }
}

void PrintStringArray(const string arr[], int arrLength)
{
    

    cout << "\nArray elements: \n\n";
    for (int i = 0;i < arrLength;i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string arr[MaxSize];

    int arrLength = ReadNumberInRange("How many Keys do you want to Generate? (1-" + to_string(MaxSize) + ")", 1, MaxSize);

    FillArrayWithKeys(arr, arrLength);

    PrintStringArray(arr, arrLength);

    return 0;
}
