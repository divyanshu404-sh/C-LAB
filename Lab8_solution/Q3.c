//Q3. Structures with Functions: Define a structure Complex with two members: real and imaginary. Write
//functions to:
//• Add two complex numbers.
//• Multiply two complex numbers.
//• Display a complex number in a + bi form.

#include <stdio.h>

struct complex{
    float a,b;
};
void num(struct complex p){
    printf("Numbers = %f + %fi\n",p.a,p.b);
}
 void sum(struct complex x,struct complex y){
    float c = x.a + y.a;
    float d = x.b + y.b;
    printf("Sum = %.2f + %.2fi\n",c,d);
}
void product(struct complex x,struct complex y){
    float c = (x.a * y.a) - (x.b * y.b);
    float d = (x.a * y.b) + (x.b * y.a);
    printf("Product = %.2f + %.2fi\n",c,d);
}

int main(){

    struct complex c1,c2;

        printf("Enter Real part and coefficient of iota(for first number): \n");
        scanf("%f %f",&c1.a,&c1.b);

        printf("Enter Real part and coefficient of iota(for second number): \n");
        scanf("%f %f",&c2.a,&c2.b);

        num(c1);
        num(c2);
        sum(c1,c2);
        product(c1,c2);
    
    return 0;

} 