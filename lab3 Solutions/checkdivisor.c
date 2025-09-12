// Write a program checkdivisor.c that takes as input from the user 2 numbers, and checks if the smaller
// number is a divisor of the larger number. It should display the appropriate output message.

#include <stdio.h>

int main(){

    int a,b;

    printf("Enter smaller number: \n");
    scanf("%d", &a);

    printf("Enter larger number: \n");
    scanf("%d", &b);

    if((b%a)==0){
        printf("smaller number is divisor of larger number");
    }

    else{
        printf("smaller is not divisor of larger number");
    }

    return 0;
}
