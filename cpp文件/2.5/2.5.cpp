#include <iostream>
#include <cctype>  
#include <string>  

using namespace std;

int main() {
    string input;
    cout << "请输入一行字符：";
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

 
    cout << "英文字母个数: " << letterCount << endl;
    cout << "空格个数: " << spaceCount << endl;
    cout << "数字字符个数: " << digitCount << endl;
    cout << "其它字符个数: " << otherCount << endl;

    return 0;
}