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


        std::cout << "�� " << day << " �칺��ƻ������: " << apples << std::endl;

        day++;
        apples *= 2;
    }
    double average_cost_per_day = total_cost / (day - 1);
    std::cout << "�ܻ���: " << total_cost << " Ԫ" << std::endl;
    std::cout << "ÿ��ƽ������: " << average_cost_per_day << " Ԫ" << std::endl;

    return 0;
}