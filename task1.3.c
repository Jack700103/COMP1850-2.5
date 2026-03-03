#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int num1, num2;
    do {
        num1 = rand()%6 + 1;
        num2 = rand()%6 + 1;
        printf("Generated: %d + %d\n", num1, num2);
    } while(num1 + num2 == 7);
    printf("Valid numbers: %d and %d (sum = %d)\n", num1, num2, num1+num2);
    return 0;
}
