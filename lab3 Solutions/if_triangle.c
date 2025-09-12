#include <stdio.h>

int main(){

    float a,b,c;

    printf("Enter side1:\n");
    scanf("%f",&a);

    printf("Enter side2:\n");
    scanf("%f",&b);

    printf("Enter side3:\n");
    scanf("%f",&c);

    
    if(a<0 || b<0 || c<0){
        printf("Input is invalid \n");
    }

    if((a+b)>c && (b+c)>a && (a+c)>b ){

        printf("Triangle can be formed\n");
    }
    

    else{
        printf("Triangle cannot be formed");
    }
    
    return 0;
}