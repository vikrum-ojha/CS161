#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int totalPoints = 500;
    int pointsEarned = 0;
    int exam1 = 0;
    int exam2 = 0;
    int exam3 = 0;
    int exam4 = 0;
    int exam5 = 0;

    double average = 0;
    double finalPercentage = 0;

    bool errorCode = false;
    char grade = 0;

    string fName;
    string lName;

    cout << "[?] Enter student's first name: ";
    getline(cin, fName);

    cout << "[?] Enter student's last name: ";
    getline(cin, lName);

    cout << "[?] Enter " << fName << "'s" << " scores from exams 1-5: ";
    cin >> exam1
        >> exam2
        >> exam3
        >> exam4
        >> exam5;

        pointsEarned = (exam1 + exam2 + exam3 + exam4 + exam5);
        average = static_cast<double>(pointsEarned);
        average = (average / static_cast<double>(totalPoints));
        finalPercentage = (average * 100.0);

        if((finalPercentage < 0) || (finalPercentage > 100))
            errorCode = true;

        if(errorCode)
        {
            cout << endl << "[!] ERROR: Please check your input!" << endl;
        }
        else
        {
            if(finalPercentage < 60)
                grade = 'F';

            else if(finalPercentage < 70)
                grade = 'D';
            else if(finalPercentage < 80)
                grade = 'C';
            else if(finalPercentage < 90)
                grade = 'B';
            else
                grade = 'A';
        }

        cout << endl << fName << " " << lName << "\t" << grade
             << " " << pointsEarned << "/" << totalPoints << " "
             << fixed << setprecision(2) << finalPercentage << "%"
             << endl;

             return 0;
}
