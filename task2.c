#include <stdio.h>
#include <ctype.h>

int main(void) {
    long decimal = 0;
    char hex[9];
    int valid = 1;
    
    printf("Enter a hexadecimal: ");
    scanf("%8s", hex); 

    for(int i = 0; hex[i] != '\0'; i++) {
        char c = hex[i];
        int value;
        
        c = toupper(c);
        
        if(c >= '0' && c <= '9') {
            value = c - '0';
        } else if(c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        } else {
            valid = 0;
            break;
        }
        
        decimal = decimal * 16 + value;
    }

    if(!valid) {
        printf("Error: Invalid Hexadecimal\n");
    } else {
        printf("%ld\n", decimal);
    }
    
    return 0;
}
