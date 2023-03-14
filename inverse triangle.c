#include <stdio.h>

int main() {
    int i, j, num = 5;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        num = 5;
        printf("\n");
    }

    return 0;
}
