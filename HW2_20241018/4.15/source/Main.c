#include <stdio.h>
#include <math.h> // 用于 pow() 函数

int main() {
    double principal = 5000.0; // 初始投资金额
    int years = 15;            // 投资年数
    double rate;               // 利率

    // 使用 for 循环n算不同的利率
    // math.h 头文件中的 pow() 函数来计算指数，即 (1+r)^n
    for (rate = 10.0; rate <= 12.0; rate += 0.5) {
        double amount = principal * pow(1.0 + rate / 100.0, years);
        printf("For an interest rate of %.2f%%, the amount after %d years is: $%.2f\n", rate, years, amount);
    }

    // 处理 11.59% 特殊利率
    rate = 11.59;
    double amount = principal * pow(1.0 + rate / 100.0, years);
    printf("For an interest rate of %.2f%%, the amount after %d years is: $%.2f\n", rate, years, amount);

    return 0;
}
