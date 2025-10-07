#include <stdio.h>

void greet(){
    printf("hi,good morning ,how are you\n");
}

int add(int a, int b){
    return a + b;
}
float circleArea(float r){
    return 3.14 * r * r;
}

int main(){

    int x, y;
    float radius;

    greet();

    printf("Enter two integers: \n");
    scanf("%d%d",&x, &y);
    printf("sum of numbers is: %d\n",add(x, y));

    printf("Enter radius of circle: \n");
    scanf("%f",&radius);
    printf("Area of circle is %.2f\n",circleArea(radius));


    return 0;
}