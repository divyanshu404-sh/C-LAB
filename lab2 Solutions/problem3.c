// WAP in C to solve the quadratic equation: 2(x∧2) - 4x - 3 = 0
// using the quadratic formula:
//                              
//                              x=(-b∓(√(b∧2)-4ac))/2a   


#include <stdio.h>
#include <math.h>

int main(){

    int a=2;
    int b=(-4);
    int c=(-3);

    printf("Roots are %f and %f",(-b+(sqrt((b*b) - (4*a*c))))/(2*a), (-b-(sqrt((b*b) - (4*a*c))))/(2*a));

    return 0;
}
                                      