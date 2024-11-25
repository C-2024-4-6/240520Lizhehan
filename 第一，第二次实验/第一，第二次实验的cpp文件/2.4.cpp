#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char ch;

    cout << "请输入第一个数字：";
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /, %)：";
    cin >> ch;
    cout << "请输入第二个数字：";
    cin >> num2;

    switch (ch) {
    case '+':
        cout << "结果是：" << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果是：" << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果是：" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "结果是：" << num1 / num2 << endl;
        }
        else {
            cout << "除数不能为0！" << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            cout << "结果：" << int(num1) % int(num2) << endl;
        }
        else {
            cout << "除数不能为0！" << endl;
        }
        break;
    default:
        cout << "输入了非法运算符！" << endl;
        break;
    }

    return 0;
}