//Union vs Structure (Memory Usage Comparison): Define both a structure and a union with the
//same members:
//int id;
//float salary;
//char name[30];
//Print the size of both using sizeof() and explain the difference in memory allocation.
//Q10. Structure Array – Marks Calculation: Define a structure Marks with fields for three 

#include <stdio.h>

struct Employee {
    int id;
    float salary;
    char name[30];
};

union Worker {
    int id;
    float salary;
    char name[30];
};

int main() {
    struct Employee e;
    union Worker w;

    printf("Size of Structure = %lu bytes\n", sizeof(e));
    printf("Size of Union     = %lu bytes\n", sizeof(w));

    return 0;
}