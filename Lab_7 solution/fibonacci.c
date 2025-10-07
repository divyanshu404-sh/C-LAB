#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) return 0; 
    if (n == 2) return 1; 

    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int k;
    printf("Enter k: \n");
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        printf("%d,",fibonacci(i));
    }
return 0;
}