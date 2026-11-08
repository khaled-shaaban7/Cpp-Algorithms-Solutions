#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string Message)
{
    string password = "";
    cout << Message << endl;
    cin >> password;


    return password;
}

bool GuessPassword(string Password)
{

    cout << "\n";
    string word = "";

    int Trial = 0;

    for (int i = 65;i <= 90;i++)
    {
        for (int j = 65;j <= 90;j++)
        {
            for (int k = 65; k <= 90;k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);


                Trial++;

                cout <<"Trial [" <<Trial<<"] : " << word << endl;

                if (word == Password)
                {
                    cout << endl;
                    cout << "Password is " << word << endl;
                    cout << "Found after " << Trial << " Trial(s)" << endl;
                    return true;
                }
                    word = "";
                

            }
            
        }
        
    }
    return false;
}

int main()
{
    GuessPassword(ReadPassword("Please enter a 3-Letter Password (all capital)?"));
    return 0;
}
