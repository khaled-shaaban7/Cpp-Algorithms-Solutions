#include <iostream>


using namespace std;


float ReadPositiveNumber(string Message)
{
    float Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float HoursToDays(float Hours)
{
    return Hours / 24;
}

float HoursToWeeks(float Hours)
{
    return Hours / 24 / 7;
}
float DaysToWeeks(float Days)
{
    return Days / 7;
}


int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter The Number Of Hours");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays  << endl;
    cout << "Total Weeks = " << NumberOfWeeks  << endl;
    cout << "Hours To Weeks = " << HoursToWeeks(NumberOfHours) << endl;

    cout << "\n______________________________________________________\n";


    return 0;
}
