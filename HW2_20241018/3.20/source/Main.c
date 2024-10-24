#include <stdio.h>

int main() {
    float hours, rate, salary;

    // 输入工作小时数，输入 -1 结束
    printf("Enter # of hours worked (-1 to end): ");
    scanf_s("%f", &hours);

    while (hours != -1) {
        // 输入小时工资
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf_s("%f", &rate);

        // 计算工资
        if (hours <= 40) {
            // 小于等于40小时按正常工资计算
            salary = hours * rate;
        }
        else {
            // 超过40小时的部分按1.5倍工资计算
            salary = (40 * rate) + ((hours - 40) * rate * 1.5);
        }

        // 输出工资
        printf("Salary is $%.2f\n", salary);

        // 再次输入工作小时数
        printf("Enter # of hours worked (-1 to end): ");
        scanf_s("%f", &hours);
    }

    return 0;
}
