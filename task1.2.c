#include <stdio.h>
int main(void) {
    double sum = 0, count = 0;
    double num;
    printf("--- Average Calculator ---\n");
    while(1) {
        printf("Enter positive number (enter -1 to finish): ");
        scanf("%lf", &num);
        if(num == -1) break;
        if(num < 0) {
            printf("Please enter positive numbers only!\n");
            continue;
        }
        sum += num;
        count++;
    }
    if(count > 0) 
        printf("Average = %.2lf\n", sum/count);
    else
        printf("No valid numbers entered\n");
    return 0;
}

