#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    char str[20] = "HELLO WORLD";
    char lwstr[20];

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            lwstr[i] = str[i] + 32;
        }
        else
        {
            lwstr[i] = str[i];
        }
    }
    cout << lwstr;
}