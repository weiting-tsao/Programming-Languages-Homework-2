#include <stdio.h>

int main() {
    printf("Pythagorean Triples (where sides and hypotenuse are <= 500):\n");

    for (int side1 = 1; side1 <= 500; side1++) {
        for (int side2 = side1; side2 <= 500; side2++) { // 确保 side2 ≥ side1
            for (int hypotenuse = side2; hypotenuse <= 500; hypotenuse++) { // 确保 hypotenuse ≥ side2
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("(%d, %d, %d)\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}
