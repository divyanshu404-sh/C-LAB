// Write a program asciicheck.c that takes as input an integer from the user. The program must output
// the hexadecimal value and octal value of the input. Further, if the input is between 32 and 126, then
// the program must output the ascii character corresponding to that input integer.

#include <stdio.h>

int main(){
    int num;

    
    printf("Enter an integer: ");

    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    if (num >= 32 && num <= 126) {
        printf("ASCII Character: %c\n", num);
    } else {
        printf("number is not between 32 and 126.\n");
    }

    return 0;
}