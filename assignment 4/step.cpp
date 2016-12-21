#include <iostream>

using namespace std;

int main()
{
    int step = 0;
    int start = 0;
    int finish = 0;

    cout << "[+] Enter starting, ending, and step number: ";
    cin >> start >> finish >> step;

    cout << endl;

    while(((start < 0) && (finish <= start) && (step < 0)))
    {
        cout << "[-]Sorry, enter values again: ";
        cin >> start >> finish >> step;
    }

    cout << endl;

    while(start <= finish)
    {
        cout << start << endl;
        start += step;
    }

    return 0;
}
