// Write a program findsmallest.c that takes as input from the user 3 numbers, and prints the smallest
// of the three. Use minimum number of if statements as possible.

#include <stdio.h>

int main(){

    float a,b,c;

    printf("Enter a:\n");
    scanf("%f",&a);

   printf("Enter b:\n");
    scanf("%f",&b);
    
    printf("Enter c:\n");
    scanf("%f",&c);

    if(a<b && a<c){
        printf("a is the smallest number");
    }
    if(b<a && b<c){
        printf("b is the smallest number");
    }
    else{
        printf("c is the smallest number");
    }

    return 0;
}