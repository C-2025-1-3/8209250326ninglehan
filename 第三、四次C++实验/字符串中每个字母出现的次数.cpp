#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lower_ch = ch;
            if (ch >= 'A' && ch <= 'Z') {
                lower_ch = ch + 32;
            }
            int index = lower_ch - 'a';
            counts[index]++;
        }
    }
}

int main() {
    char s[1000];
    int counts[26];

    cout << "Enter a string: ";
    cin.getline(s, 1000);

    count(s, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}