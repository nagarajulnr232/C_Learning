#include <stdio.h>

int main() {
    int n;
    unsigned long long int f = 1;
    printf("Enter n value : ");
    scanf("%d",&n);
    
    if (n == 0 || n == 1) {
        printf("Factorial value = 1");
    }
    else if (n < 0) {
        printf("Enter positive number only");
    }
    else{
        for (int i=1; i <= n; ++i) {
            f *= i;
        }
        printf("Factorial: %llu\n", f);
        
    }
    return 0;
}
