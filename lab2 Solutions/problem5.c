//5. WAP in C that takes five integers from the user and print their average.


#include <stdio.h>

int main(){

    int a,b,c,d,e;

    printf("Enter a:\n");
    scanf("%d",&a);

    printf("Enter b:\n");
    scanf("%d",&b);

    printf("Enter c:\n");
    scanf("%d",&c);

    printf("Enter d:\n");
    scanf("%d",&d);

    printf("Enter e:\n");
    scanf("%d",&e);

    float avg = (a+b+c+d+e)/5.0;

    printf("Average of five numbers is %f",avg);

    return 0;
}