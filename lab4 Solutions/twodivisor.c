// Write a program that asks the user for a positive integer and returns how many times the number can
// be divided by 2 before it becomes less than or equal to 1. For example:
// • Input: 32; Output: 5
// • Input: 31; Output: 5
// • Input: 33; Output: 6

#include <stdio.h>

int main(){

    int n;

    printf("Ennter any posive integer n:\n");
    scanf("%d",&n);
     
    int i=1;
     if(n>1){
    while(n>1){
        n=n/2;
        i++;
}
printf("Number can be %d time divided by 2 before it becomes less than or equal to 1\n",i);
}
else{
    printf("Number is already less than or equal to 1");
}
return 0;
}