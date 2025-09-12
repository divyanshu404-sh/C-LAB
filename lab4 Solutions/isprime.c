// Write a program that prompts the user for a positive integer and determines whether the number is a prime.

#include <stdio.h>

int main(){

    int n,r;

    printf("Ennter any posive integer :\n");
    scanf("%d",&n);

    int prime=1;
    
    for(int i=2;i<=n/2;i++){
        r=n%i;
        if(r==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("%d is not prime\n",n);
    }
    else{
        printf("%d is prime\n",n);
    }
    return 0;
}