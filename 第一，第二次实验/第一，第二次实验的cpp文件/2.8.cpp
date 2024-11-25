#include <iostream>
#include <cmath>

int main() {
    double a, x;
    const double limit = 1e-5;

    std::cout << "������һ������ a: ";
    std::cin >> a;

    if (a < 0) {
        std::cout << "�޷����㸺����ƽ������" << std::endl;
    }
    

    x = a; 
    while (true) {
        double next_x = 0.5 * (x + a / x);
        if (std::abs(next_x - x) <limit) break;
        x = next_x;
    }

    std::cout << "ƽ����ԼΪ: " << x << std::endl;

    return 0;
}
