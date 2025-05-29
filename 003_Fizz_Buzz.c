#include <stdio.h>

void print_hunred(int i) {

    if  (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FIZZ_BUZZ\n");
        }
        else if (i % 3 == 0) {
            printf("FIZZ\n");
        }
        else if (i % 5 == 0) {
            printf("BUZZ\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    print_hunred(i + 1);
}


int main() {
    print_hunred(1);
    

return 0;
}