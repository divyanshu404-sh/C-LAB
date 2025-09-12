// 1. Write a program that prompts the user to input an integer n and returns the sum of the squares of
//    even numbers between 2 and n (inclusive).

#include <stdio.h>

int main(){

    int n;
    int sum=0;

    printf("Enter any integer:\n");
    scanf("%d",&n);

    if(n%2==0){
        for(int i=2;i<=n;i+=2){
            sum = sum + i*i;
        }
        printf("sum of even numbers btw 2 and %d is %d",n,sum);
    }
    else{
        for(int i=2;i<=(n-1);i+=2){
            sum = sum + i*i;
        }
        printf("sum of even numbers btw 2 and %d is %d",n,sum);
    }

    return 0;
}