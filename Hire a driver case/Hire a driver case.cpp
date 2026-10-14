#include <iostream>
using namespace std;

struct stPersonInfo 
{
    short int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stPersonInfo ReadPersonInfo()
{
    stPersonInfo Info;

    cout << "Please Enter Yor Age " << endl;
    cin >> Info.Age;

    cout << "Do you have driving license? " << endl;
    cin >> Info.HasDrivingLicense;

    cout << "Do you have Recommendation? " << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stPersonInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }

}

void PrintResult(stPersonInfo Info)
{
    if (IsAccepted(Info))
    {
        cout << "\n Hired" << endl;
    }
    else
    {
        cout << "\n Rejected" << endl;  
    }
}
int main()
{   
    PrintResult(ReadPersonInfo());
}

