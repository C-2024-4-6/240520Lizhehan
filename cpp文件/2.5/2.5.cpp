#include <iostream>
#include <cctype>  
#include <string>  

using namespace std;

int main() {
    string input;
    cout << "������һ���ַ���";
    getline(cin, input);  

    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;

    
    for (char ch : input) {
        if (isalpha(ch)) {
            letterCount++;  
        }
        else if (isspace(ch)) {
            spaceCount++; 
        }
        else if (isdigit(ch)) {
            digitCount++;  
        }
        else {
            otherCount++;   
        }
    }

 
    cout << "Ӣ����ĸ����: " << letterCount << endl;
    cout << "�ո����: " << spaceCount << endl;
    cout << "�����ַ�����: " << digitCount << endl;
    cout << "�����ַ�����: " << otherCount << endl;

    return 0;
}