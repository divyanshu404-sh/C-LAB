// WAP to enter numbers till the user wants. At the end, it should display the count of positive,
// negative,and Zeroes entered.
 
#include <stdio.h>

int main(){

    float n;
    char option;
    int p=0,ne=0,z=0;
    do{
        printf("Enter any number; \n");
        scanf("%f",&n);
        if(n>0){
            p++;
        }
        else if(n<0){
            ne++;
        }
        else{
            z++;
        }
        printf("Do you wan to enter another number(y/n): \n");
        scanf(" %c",&option);
    }
    while(option=='y' || option=='Y');

    printf("Positive number = %d\n",p);
    printf("Negative number = %d\n",ne);
    printf("zero= %d\n",z);

    return 0;
}