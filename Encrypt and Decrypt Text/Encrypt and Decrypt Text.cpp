#include <iostream>
#include <string>
using namespace std;

string ReadText(string Message)
{
    string Text = "";
    cout << Message << endl;
    getline(cin, Text);


    return Text;
}

string EncryptText(string Text , short Encryptionkey)
{
    for (int i = 0; i <= Text.length();i++)
    {
        Text[i] = char((int)Text[i] + Encryptionkey);
    }

    return Text;
}

string DecryptText(string Text, short Encryptionkey)
{
    for (int i = 0; i <= Text.length();i++)
    {
        Text[i] = char((int)Text[i] - Encryptionkey);
    }

    return Text;
}

int main()
{
    const short Encryptionkey = 3;

    string Text =ReadText("Please enter Text to Encrypt");

    string AfterEncryption = EncryptText(Text, Encryptionkey);
    string AfterDecryption = DecryptText(AfterEncryption , Encryptionkey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << AfterEncryption << endl;
    cout << "Text After Decryption  : " << AfterDecryption << endl;


    return 0;
}
