#include <iostream>
#include <cstring>

using namespace std;

void convertToSMS();
void convertToStandard();
void replaceStr(string &src, string exp, string replacement);
int menu();

int main()
{
    bool exit = false;

    while(exit == false)
    {
        switch(menu())
        {
            case 1:
            {
                convertToSMS();
                break;
            }
            case 2:
            {
                convertToStandard();
                break;
            }
            case 3:
            {
                exit = true;
                break;
            }
        }
    }

    return 0;
}

void convertToSMS()
{
    string str;

    cout << "String: ";

    cin.clear();
    cin.ignore(100, '\n');
    getline(cin, str);

    replaceStr(str, "see you", "c u");
	replaceStr(str, "talk to you later", "ttyl");
	replaceStr(str, "be right back", "brb");
	replaceStr(str, "by the way", "btw");
	replaceStr(str, "c u", "see you");
	replaceStr(str, "ttyl", "talk to you later");
	replaceStr(str, "brb", "be right back");
	replaceStr(str, "btw", "by the way");
	replaceStr(str, "bff", "best friends forever");
	replaceStr(str, "fwiw", "for what it's worth");
	replaceStr(str, "gr8", "great");
	replaceStr(str, "imho", "in my humble opinion");
	replaceStr(str, "l8r", "later");
	replaceStr(str, "omw", "on my way");
	replaceStr(str, "np", "no problem");
	replaceStr(str, "tmi", "too much information");
    replaceStr(str, "wywh", "wish you were here");
	replaceStr(str, "best friends forever", "bff");
	replaceStr(str, "for what it's worth", "fwiw" );
	replaceStr(str, "great", "gr8");
	replaceStr(str, "in my humble opinion", "imho");
	replaceStr(str, "later", "l8r");
	replaceStr(str, "on my way", "omw");
	replaceStr(str, "no problem", "np");
	replaceStr(str, "too much information", "tmi");
    replaceStr(str, "wish you were here", "wywh");

    cout << "\n-------------- Translation --------------" << endl;
    cout << str << endl << endl;
}

void convertToStandard()
{
    string str;

    cout << "String: ";

    cin.clear();
    cin.ignore(100, '\n');
    getline(cin, str);

    replaceStr(str, "c u", "see you");
	replaceStr(str, "ttyl", "talk to you later");
	replaceStr(str, "brb", "be right back");
	replaceStr(str, "btw", "by the way");
	replaceStr(str, "bff", "best friends forever");
	replaceStr(str, "fwiw", "for what it's worth");
	replaceStr(str, "gr8", "great");
	replaceStr(str, "imho", "in my humble opinion");
	replaceStr(str, "l8r", "later");
	replaceStr(str, "omw", "on my way");
	replaceStr(str, "np", "no problem");
	replaceStr(str, "tmi", "too much information");
    replaceStr(str, "wywh", "wish you were here");

    cout << "\n-------------- Translation --------------" << endl;
    cout << str << endl << endl;
}

void replaceStr(string &src, string exp, string replacement)
{
    if(strncmp(src.c_str(), exp.c_str(), -1) == 0)
    {
        src = replacement;
    }
}

int menu()
{
    int select = 0;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(100, '\n');
            }

            cout << "-Welcome to the SMS <-> English Translator-\n";
            cout << "(1) Convert to SMS\n";
            cout << "(2) Convert to English\n";
            cout << "(3) Exit\n\n";
            cout << "Choice: ";

    }while(!(cin >> select) || (select <= 0) || (select >= 4));

    return select;
}
