#include <stdlib.h>
#include <stdio.h>

int main() {
    const double baseSalary = 200.0;   // 固定薪水
    const double commissionRate = 0.09; // 佣金率
    float sales;                       // 销售额

    // 输入销售额
    printf("Enter sales in dollars (-1 to end): ");
    scanf_s("%f", &sales);

    // 检查是否退出
    while (sales != -1) {
        // 计算工资
        double salary = baseSalary + (sales * commissionRate);

        // 输出工资
        printf("Salary is: $ %.2f\n",salary);
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &sales);
    }

    return 0;
}
