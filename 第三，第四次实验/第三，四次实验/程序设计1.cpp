#include <iostream>
using namespace std;
int indexof(const char s1[], const char s2[])
{
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
    char s1[1000], s2[1000];
    cout << "输入第一个字符串";
    cin.getline(s1, 1000);
    cout << endl << "请输入第二个字符串";
    cin.getline(s2, 1000);
    cout<<indexof(s1, s2);
    return 0;
}