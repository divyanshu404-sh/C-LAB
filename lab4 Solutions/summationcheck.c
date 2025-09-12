#include <stdio.h>
#include <math.h>

int main(){

    float x;
    int k;
    float sum=0;

    printf("Enter any number in range(-1,1): \n");
    scanf("%f",&x);
    
    float m=1/(1-x);
    for(k=0;k>=0;k++){
        sum=sum+pow(x,k);
        if((sum-m)<0.01 && (sum-m)>(-0.01)){
            break;
        }
    }
    printf("The value of n is %d\n",k);

    return 0;
}