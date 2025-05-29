// Multiplication table of 2
#include <stdio.h>

int main() {
    int i;
    int number = 2;
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", number, i, number * i);
    }

    return 0;
}