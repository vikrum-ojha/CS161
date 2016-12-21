#include <iostream>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

void setTime(tm &time);
void calcDiff(tm &start, tm &fin, tm &diff);
void displayTime(tm &time);

int main()
{
    tm diff;
    tm start;
    tm finish;

    cout << "-Start time-" << endl;
    setTime(start);
    cout << "-End time-" << endl;
    setTime(finish);

    calcDiff(start, finish, diff);
    displayTime(diff);


    return 0;
}

void setTime(tm &time)
{
    /////////Hour block//////
    bool bErr = true;

    while(bErr)
    {
        cout << "Enter hour: ";

        if(cin >> time.tm_hour)
        {
            if((time.tm_hour <= 23) && (time.tm_hour >= 0))
            bErr = false;
        }
        else
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
    }
    //////////////////////////////

    ////////////Minute block//////////
    bErr = true;

    while(bErr)
    {
        cout << "Enter minutes: ";

        if(cin >> time.tm_min)
        {
            if((time.tm_min <= 59) && (time.tm_min >= 0))
            bErr = false;
        }
        else
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
    }
    ///////////////////////////////////

    ////////////Second block//////////
    while(bErr)
    {
        cout << "Enter hour: ";

        if(cin >> time.tm_sec)
        {
            if((time.tm_sec <= 59) && (time.tm_sec >= 0))
            bErr = false;
        }
        else
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
    }
    //////////////////////////////////
}

void calcDiff(tm &start, tm &fin, tm &diff)
{
    diff.tm_hour = fin.tm_hour - start.tm_hour;
    diff.tm_min = fin.tm_min - start.tm_min;
}

void displayTime(tm &time)
{
    char tString[32];

    strftime(tString, -1, "%T", &time);

    cout << tString << endl;
}
