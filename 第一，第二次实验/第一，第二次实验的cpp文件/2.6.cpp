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

    cout << "请输入两个正整数：";
    cin >> a >> b;
   
    if (a <= 0 || b <= 0) {
        cout << "错误：请输入正整数！" << endl;
    }
    int c = f1(a, b);
    int d = f2(a, b);
    cout << "最大公约数是 ：" << c<< endl;
    cout << "最小公倍数是 ：" << d << endl;
    return 0;
}