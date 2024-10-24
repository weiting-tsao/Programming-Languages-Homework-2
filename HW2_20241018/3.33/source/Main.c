#include <stdio.h>

int main() {
    int length, breadth;

    // 输入矩形的长度和宽度
    printf("Enter the length of the rectangle: ");
    scanf_s("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf_s("%d", &breadth);

    // 打印矩形
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= breadth; j++) {
            // 第一行和最后一行，打印完整的一行 '+'(橫的)
            if (i == 1 || i == length) {
                printf("+");
            }
            // 第一列和最后一列打印 '+'(豎的)
            else {
                if (j == 1 || j == breadth) {
                    printf("+");
                }
                else {
                    printf(" ");    //其餘部分打印空格
                }
            }
        }
        printf("\n");
    }

    return 0;
}
