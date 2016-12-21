#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//OBJECTIVE: Count letters in a given document and keep track of them all.  Display all after file has been processed.  Used in code cracking.

void updateLetterCount(const char line, int iArray[]);
void processFile();
void displayResults(int iArray[]);

int main()
{
    processFile();

    return 0;
}

void updateLetterCount(const char *line, int iArray[])
{
    int len = strlen(line);

    for(int i = 0; i < len; i++)
    {
        if((((int)line[i] >= 65) && ((int)line[i] <= 90)) || (((int)line[i] >= 97) && ((int)line[i] <= 122)))
            iArray[(tolower(line[i])) - 97]++;
    }
}

void processFile()
{
    fstream file;
    int letters[26] = {0};

    string path;

    do
    {
        cout << "Filepath: ";
        getline(cin, path);

        file.open(path.c_str());

        if(!file.is_open())
            {
                cin.clear();
                cin.ignore(100, '\n');
            }

    }while(!file.is_open());


    while(!file.eof())
    {
        string str;

        getline(file, str, '\n');

        updateLetterCount(str.c_str(), letters);
    }

    file.close();

    displayResults(letters);
}

void displayResults(int iArray[])
{
    for(int i = 0; i < 26; i++)
    {
        cout << (char)(i + 97) << ": "
             << iArray[i] << endl;
    }
}



