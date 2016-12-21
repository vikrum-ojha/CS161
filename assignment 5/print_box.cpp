#include <iostream>

using namespace std;

void printRect(int &width, int &height);
void setDimension(int &width, int &height);

int main()
{
    int height = 0;
    int width = 0;

    setDimension(width, height);
    printRect(width, height);


    return 0;
}

void printRect(int &width, int &height)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cout << "X";
        }

        cout << endl;
    }
}

void setDimension(int &width, int &height)
{
    cout << "Enter width: ";

    while(!(cin >> width))
    {
        cout << "[!] Error INVALID input." << endl;
        cout << "Enter width: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "Enter height: ";

    while(!(cin >> height))
    {
        cout << "[!] Error INVALID input." << endl;
        cout << "Enter height: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
}
