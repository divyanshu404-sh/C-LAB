#include <stdio.h>

int main() {
    int L;
    printf("Enter limit L: ");
    scanf("%d", &L);

    int found = 0;

    for (int a = 1; a <= L; a++) {
        for (int b = a; b <= L; b++) {
        for (int c = 1; c <= L; c++) {
                for (int d = c; d <= L; d++) {
                   
 int sum1 = a*a*a + b*b*b;
int sum2 = c*c*c + d*d*d;


                    
if (sum1 == sum2 && !(a == c && b == d)) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                       
         sum1, a, b, c, d);
                        
           found = 1;
                   
 }
                }
      }
 }
    }

    if (!found) {
        printf("No Ramanujan numbers found up to limit %d.\n", L);
    }

    return 0;
}