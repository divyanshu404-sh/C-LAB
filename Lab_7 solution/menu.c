#include <stdio.h>

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=i*f;
    }
    return f;
}
    void isprime(int n){
        int count=1;
        for(int i=2;i<n;i++){
            if(n%i==0){
                count=0;
                break;
            }
        }
        if(count==1){
            printf("prime\n");
        }
        else{
            printf("Not prime\n");
        }
    }
    int main(){

        int option,a,b;
        printf("--Menu--\n");
        printf("Choose option\n");
        printf("1.factorial\n 2.Is prime\n");

        scanf("%d",&option);
        if(option==1){
            printf("Enter number to get factorial: \n");
            scanf("%d",&a);
            printf("Factorial of %d is %d\n",a,factorial(a));
        }
        else if(option==2){
            printf("Enter number: \n");
            scanf("%d",&b);
            isprime(b);
        }
        return 0;
    }
