#include <stdio.h>

int main() {
    int number = 53;

    printf("Odd numbers from 53 to 21 (inclusive):\n");
    while (number >= 21) {

            printf("%d\n", number);
        number-=2;
    }
    return 0;
}
