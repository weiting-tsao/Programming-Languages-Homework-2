#include <stdio.h>

int main() {
    int n = 5; // 菱形上半部分的行数

    // 打印菱形上半部分
    for (int i = 1; i <= n; i++) {
        // 打印空格
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // 打印星号
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // 换行
    }

    // 打印菱形下半部分
    for (int i = n - 1; i >= 1; i--) {
        // 打印空格
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // 打印星号
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // 换行
    }

    return 0;
}
