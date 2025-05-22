#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    printf("a = %d and b = %d\n", a, b);
    a ^= b ^= a ^= b;
    printf("a = %d and b = %d",a, b);

    return 0;
}
