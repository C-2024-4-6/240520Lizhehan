#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char ch;

    cout << "�������һ�����֣�";
    cin >> num1;
    cout << "����������� (+, -, *, /, %)��";
    cin >> ch;
    cout << "������ڶ������֣�";
    cin >> num2;

    switch (ch) {
    case '+':
        cout << "����ǣ�" << num1 + num2 << endl;
        break;
    case '-':
        cout << "����ǣ�" << num1 - num2 << endl;
        break;
    case '*':
        cout << "����ǣ�" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "����ǣ�" << num1 / num2 << endl;
        }
        else {
            cout << "��������Ϊ0��" << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            cout << "�����" << int(num1) % int(num2) << endl;
        }
        else {
            cout << "��������Ϊ0��" << endl;
        }
        break;
    default:
        cout << "�����˷Ƿ��������" << endl;
        break;
    }

    return 0;
}