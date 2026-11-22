#include <iostream>
#include <string>
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

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

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
    {
        return char(RandomNumber('a', 'z'));
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber('A' , 'Z'));
    }
    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber('!', '/'));
    }
    case enCharType::Digit:
    {
        return char(RandomNumber('0', '9'));
    }
    }

    return '\0';

 }



string GenerateWord(enCharType CharType , int Length)
{
    string Word = "";

    for (int i = 1; i <= Length; i++)
    {
        Word += GetRandomCharacter(CharType);
    }

    return Word;
}



string GenerateKey()
{
   string Key = "";

   Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
   Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
   Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
   Key += GenerateWord(enCharType::CapitalLetter, 4) ;

   return Key;
}

void GenerateKeys(int NumberOfKeys)
{
    for (int i = 1;i <= NumberOfKeys;i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey();
        cout << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));
       
    GenerateKeys(ReadPositiveNumber("How many Keys do you want to Generate?"));
        
    return 0;
 }

