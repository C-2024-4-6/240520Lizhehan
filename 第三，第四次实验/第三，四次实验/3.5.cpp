#include <iostream>
using namespace std;

int peachCount(int day) {
    if (day == 10) { 
        return 1;
    }
    else {
        return 2 * (peachCount(day + 1) + 1); 
    }
}

int main() {
    int day = 1; 
    cout << "���ӵ�һ��ժ�����������ǣ�" << peachCount(day) << endl;
    return 0;
}