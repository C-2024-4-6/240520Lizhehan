#include <iostream>
using namespace std;
int main()
{
    int numbers[10];
    int uniqueNumbers[10];
    int uniqueCount = 0;

    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];


        bool isNew = true;
        for (int j = 0; j < uniqueCount; j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                isNew = false;
                break;
            }
        }


        if (isNew) {
            uniqueNumbers[uniqueCount] = numbers[i];
            uniqueCount++;
        }
    }


    cout << "不同的数是：" << endl;
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;
    return 0;
}
