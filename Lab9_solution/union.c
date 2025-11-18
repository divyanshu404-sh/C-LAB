// Union Example – Multi-type Data Storage: Define a union Data that can store either an int, a
// float, or a char[20].

#include <stdio.h>
#include <string.h>

union Data {
    int a;
    float b;
    char c[20];
};

int main(){

    union Data d;
    
    d.a=10;
    printf("Integer =%d\n",d.a);
    
    d.b=23.43;
    printf("Float=%.2f\n",d.b);

    strcpy(d.c,"hello");
    printf("Character=%s\n",d.c);

    printf("After-------\n");
    printf("Integer=%d\n",d.a);
    printf("Float=%f\n",d.b);
    printf("Character=%s\n",d.c);
    return 0;
}