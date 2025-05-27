#include <stdio.h>

void print_hunred(int i) {
    if (i <= 100){
        printf("%d\n",i);
        print_hunred(i+1);
    }
}


int main() {
    print_hunred(1);

return 0;
}
