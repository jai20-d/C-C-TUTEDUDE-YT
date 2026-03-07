#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char mainStr[100], subStr[100];

    cout << "Enter main string: ";
    cin.getline(mainStr, 100);

    cout << "Enter substring: ";
    cin.getline(subStr, 100);

    char *p = mainStr;
    int lenSub = strlen(subStr);
    int pos = 0;

    cout << "Starting positions of substring '" << subStr << "':" << endl;

    while (*(p + pos) != '\0')
    {
        if (strncmp(p + pos, subStr, lenSub) == 0)
        {
            cout << "Position " << pos << endl;
        }
        pos++;
    }

    return 0;
}