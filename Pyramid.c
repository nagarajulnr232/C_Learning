#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int s = 1; s <= 4 - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", num);
            num++;

        }
        printf("\n");
    }

    return 0;
}
