#include <iostream>
int main()
{
    double price_per_apple = 0.8;
    int day = 1;
    int apples = 2;
    int total_apples = 0;
    double total_cost = 0;

    while (apples <= 100) {
        total_apples += apples;
        total_cost += apples * price_per_apple;


        std::cout << "第 " << day << " 天购买苹果数量: " << apples << std::endl;

        day++;
        apples *= 2;
    }
    double average_cost_per_day = total_cost / (day - 1);
    std::cout << "总花费: " << total_cost << " 元" << std::endl;
    std::cout << "每天平均花费: " << average_cost_per_day << " 元" << std::endl;

    return 0;
}