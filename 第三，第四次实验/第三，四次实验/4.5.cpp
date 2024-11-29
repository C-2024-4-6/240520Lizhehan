#include <iostream>
using namespace std;
int indexof(const char s1[], const char s2[]) {
    int i = 0, j = 0;
    while (s2[i] != '\0') {
        if (s2[i] == s1[j]) {
            int start = i;
            while (s1[j] != '\0' && s2[i] == s1[j]) {
                i++;
                j++;
            }
            if (s1[j] == '\0') {
                return start;
            }

            i = start + 1;
            j = 0;
        }
        else {
            i++;
        }
    }

    return -1;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin.getline(s1, 100); 
    cout << "Enter the second string: ";
    cin.getline(s2, 100);
    int result = indexof(s1, s2);

    if (result != -1) {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\")" << "is" << result;
    }
    else {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\")" << "is" << result;
    }

    return 0;
}