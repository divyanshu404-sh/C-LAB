//Q6. Menu-Driven Program using Enum: Define an enum Operation with values { ADD, SUBTRACT,
//MULTIPLY, DIVIDE, EXIT }. Write a menu-driven program that:
//    • Prompts the user to choose an operation.
//    • Performs the corresponding arithmetic operation on two integers.
//    • Continues until the user selects EXIT.

#include <stdio.h>

enum opr { ADD=1, SUBTRACT,MULTIPLY, DIVIDE, EXIT };

int main(){
    enum opr x;
    int a,b;
do{
    printf("1.Addition\n2.Subtration\n3.Multipication\n4.Divide\n5.EXIT\n");
    printf("Enter Option: \n");
    scanf("%d",&x);

    switch(x){
        case ADD:{
            printf("Enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("%d + %d = %d\n",a,b,(a+b));
            break;
        }
        case SUBTRACT:{
            printf("Enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("%d - %d = %d\n",a,b,(a-b));
            break;
        }
        case MULTIPLY:{
        printf("Enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("%d X %d = %d\n",a,b,(a*b));
            break;
        }
        case DIVIDE:{
            printf("Enter two numbers:\n");
            scanf("%d %d",&a,&b);
            printf("%d ➗ %d = %d\n",a,b,(a/b));
            break;
        }
        case EXIT: break;
    }
}
while (x!=EXIT);
    
    return 0;
}