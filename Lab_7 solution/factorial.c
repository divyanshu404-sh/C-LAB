#include <stdio.h>

long factorial(int n){
    long f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){

    int n,r;

    printf("Enter n & r (n>r): \n");
    scanf("%d%d",&n,&r);
    printf("fatorial of %d is %ld\n",n,factorial(n));
    int coefficient=factorial(n)/(factorial(r)*factorial(n-r));
    printf("Bionomial coefficient is %d\n",coefficient);

    return 0;
}