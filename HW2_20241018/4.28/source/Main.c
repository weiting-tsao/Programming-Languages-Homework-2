#include <stdio.h>

int main() {
    int payCode; // 员工的支付代码
    double weeklyPay = 0.0; // 周薪

    while (1) {
        // 提示输入支付代码
        printf("Enter the employee's pay code (1 for Manager, 2 for Hourly Worker, 3 for Commission Worker, 4 for Pieceworker, 0 to exit): ");
        scanf_s("%d", &payCode);

        // 如果用户输入 0，则退出循环
        if (payCode == 0) {
            break;
        }

        switch (payCode) {
        case 1: { // 管理人员
            double salary;
            printf("Enter the weekly salary for the manager: ");
            scanf_s("%1f", &salary);
            weeklyPay = salary;
            break;
        }
        case 2: { // 臨时工
            double hourlyWage, hoursWorked;
            printf("Enter the hourly wage: ");
            scanf_s("%1f", &hourlyWage);
            printf("Enter the number of hours worked: ");
            scanf_s("%1f", &hoursWorked);

            // 计算周薪
            if (hoursWorked > 40) {
                weeklyPay = (hourlyWage * 40) + ((hoursWorked - 40) * hourlyWage * 1.5);
            }
            else {
                weeklyPay = hourlyWage * hoursWorked;
            }
            break;
        }
        case 3: { // 佣金工
            double grossSales;
            printf("Enter the gross weekly sales: ");
            scanf_s("%1f", &grossSales);
            weeklyPay = 250 + (grossSales * 0.057);
            break;
        }
        case 4: { // 计件工
            double payPerPiece;
            int piecesProduced;
            printf("Enter the pay per piece: ");
            scanf_s("%lf", &payPerPiece);
            printf("Enter the number of pieces produced: ");
            scanf_s("%d", &piecesProduced);
            weeklyPay = payPerPiece * piecesProduced;
            break;
        }
        default:
            printf("Invalid pay code. Please enter a valid code.\n");
            continue; // 继续循环以输入有效的支付代码
        }

        // 显示计算出的周薪
        printf("The weekly pay is: $%.2f\n", weeklyPay);
    }

    printf("Exiting the program.\n");
    return 0;
}
