#include <stdio.h>

int main() {
    // Pattern A
    printf("\nPattern A:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%s", "*");
        }
        for (int j = 1; j <= 11 - i; j++) {
            printf("%s", " ");
        }
        printf("\n");
    }

    // Pattern B
    printf("\nPattern B:\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%s", "*");
        }
        for (int j = 1; j <= 11 - i; j++) {
            printf("%s", " ");
        }
        printf("\n");
    }

    // Pattern C
    printf("\nPattern C:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i - 1; j++) {
            printf("%s", " ");
        }
        for (int j = 1; j <= 11 - i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    // Pattern D
    printf("\nPattern D:\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) {
            printf("%s", " ");
        }
        for (int j = 1; j <= 11 - i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}
