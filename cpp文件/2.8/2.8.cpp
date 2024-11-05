#include <iostream>
#include <cmath>

int main() {
    double a, x;
    const double limit = 1e-5;

    std::cout << "请输入一个正数 a: ";
    std::cin >> a;

    if (a < 0) {
        std::cout << "无法计算负数的平方根！" << std::endl;
    }
    

    x = a; 
    while (true) {
        double next_x = 0.5 * (x + a / x);
        if (std::abs(next_x - x) <limit) break;
        x = next_x;
    }

    std::cout << "平方根约为: " << x << std::endl;

    return 0;
}
