#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    double x, y;
for (int i = 0; i < 4; i++) {
        std::cout << "������ x ��ֵ: ";
        std::cin >> x;

       
      if (x > 0 && x < 1) {
            y = 3 - 2 * x;
        }
        else if (x >= 1 && x < 5) {
            y = (2.0 / (4 * x)) + 1;
        }
        else if (x >= 5 && x < 10) {
            y = x * x;
        }
        else {
            std::cout << "x �����˷�Χ 0 < x < 10��" << std::endl;
            i--; 
            continue; 
        }

        
        std::cout << "y ��ֵ��: " << y << std::endl;
    }
    return 0;
}
