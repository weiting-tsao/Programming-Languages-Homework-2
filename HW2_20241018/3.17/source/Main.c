#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, Balance;

    // 輸入帳號，輸入 -1 結束
    printf("Enter account number (-1 to end):");
    scanf_s("%d", &accountNumber);

    while (accountNumber != -1) {
        // 輸入期初餘額、總費用、總學分、信用額度
        printf("Enter beginning balance:");
        scanf_s("%f", &beginningBalance);

        printf("Enter total charges:");
        scanf_s("%f", &totalCharges);

        printf("Enter total credits:");
        scanf_s("%f", &totalCredits);

        printf("Enter credit limit:");
        scanf_s("%f", &creditLimit);

        // 計算新餘額
        Balance = beginningBalance + totalCharges - totalCredits;

        // 顯示帳戶號碼、信用額度和新餘額
        printf("\naccount number:%d\n", accountNumber);
        printf("credit limit:%.2f\n", creditLimit);
        printf("balance:%.2f\n", Balance);

        // 檢查是否超過信用額度
        if (Balance > creditLimit) {
            printf("Warning: Credit limit exceeded!\n");
        }
        else {
            printf("Within the credit limit.\n");
        }

        // 再次提示輸入帳號
        printf("\nEnter account number (-1 to end):");
        scanf_s("%d", &accountNumber);

    }
    printf("End of program.\n");

    return 0;
}
