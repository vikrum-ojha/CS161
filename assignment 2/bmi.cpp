#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double weight = 0;
    double height = 0;
    double bmi = 0;

    cout << "Welcome to the BMI calculator." << endl;
    cout << "Enter your weight in (lbs): ";

    cin >> weight;

    cout << "Enter your height in inches: ";

    cin >> height;

    bmi = (weight / (height * height) * 703);

    cout << fixed << setprecision(1)
         << "Your BMI is: " << bmi << endl;

         return 0;
}
