#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;

    // 输入本金，直到用户输入 -1 结束
    printf("Enter loan principal (-1 to end): ");
    scanf_s("%f", &principal);

    while (principal != -1) {
        // 输入利率
        printf("Enter interest rate: ");
        scanf_s("%f", &rate);

        // 输入贷款天数
        printf("Enter term of the loan in days: ");
        scanf_s("%d", &days);

        // 计算利息
        interest = (principal * rate * days) / 365;

        // 输出利息
        printf("The interest charge is $%.2f\n", interest);

        // 再次输入本金，继续下一轮输入
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%f", &principal);
    }

    return 0;
}
