#include <stdio.h>

int main() {
    float fohrenheit, c;
    printf("Enter temp in fohrenheit: ");
    scanf("%f", &fohrenheit);
    c = (fohrenheit - 32) * 5 / 9;
    printf("Tempurature in celcius : %.2f \n", c);
    return 0;
}