#include <iostream>
using namespace std;

int f1(int a, int b) {
    while (b != 0) {
        int i = b;        
        b = a % b;
        a = i;
    }
    return a;
}

int f2(int a, int b) {
    return (a * b) / f1(a, b);
}

int main() {
    int a, b;

    cout << "������������������";
    cin >> a >> b;
   
    if (a <= 0 || b <= 0) {
        cout << "������������������" << endl;
    }
    int c = f1(a, b);
    int d = f2(a, b);
    cout << "���Լ���� ��" << c<< endl;
    cout << "��С�������� ��" << d << endl;
    return 0;
}