#include <iostream>
using namespace std;
enum enPassFail{pass=1,Fail=2};
short ReadMark()
{
    short Mark;

    cout << "Please enter the Mark " << endl;
    cin >> Mark;

    return Mark;
}

enPassFail CheckMark(short Mark)
{
    if (Mark >= 50)
    {
        return enPassFail::pass;
    }
    else
    {
        return enPassFail::Fail;
    }
}

void PrintResults(short Mark)
{
    if (CheckMark(Mark)==enPassFail ::pass )
    {
        cout << "\n You Passed" << endl;
    }
    else
    {
        cout << "\n You Faild" << endl;
    }
}

int main()
{
    PrintResults(ReadMark());
}
