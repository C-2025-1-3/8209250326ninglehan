#include<iostream>
using namespace std;
int parseHex(const char* const hexString) 
{
    int result = 0;
    int i = 0;

    while (hexString[i] != '\0') {
        char c = toupper(hexString[i]);
        int value;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = 10 + (c - 'A');
        }
        else {
            return 0;
        }

        result = result * 16 + value;
        i++;
    }

    return result;
}

int main()
{
    int i = parseHex("A5");
    cout << i << endl;
    return 0;
}