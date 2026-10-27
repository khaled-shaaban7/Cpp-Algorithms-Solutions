#include <iostream>


using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes,  NumberOfSeconds;
};
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

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter the Number Of Days");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter the Number Of Hours");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter the Number Of Minutes");
    TaskDuration.NumberOfSeconds  = ReadPositiveNumber("Please Enter the Number Of Seconds");

    return TaskDuration;
}

int CalculateTaskDurationInSeconds(stTaskDuration TaskDuration)
{
    int DurationInSeconds;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}
int main()
{
    int DurationInSeconds = CalculateTaskDurationInSeconds(ReadTaskDuration());
    cout << endl;
    cout << "Duration In Seconds = " << DurationInSeconds << endl;

    return 0;
}
