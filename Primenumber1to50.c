#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 50:\n");
    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
