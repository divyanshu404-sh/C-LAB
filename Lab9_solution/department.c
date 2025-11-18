//Nested Structure – Company and Department: Define a structure Department with fields name
//and head. Define another structure Company containing the company name, and an array of departments.
//Input and display company details with 3 departments.

#include <stdio.h>

struct Department {
    char name[30];
    char head[30];
};

struct Company {
    char cname[30];
    struct Department dept[3];
};

int main() {
    struct Company c;
    int i;

    printf("Enter company name: ");
    scanf("%s", c.cname);

    for (i = 0; i < 3; i++) {
        printf("\nEnter department %d name: ", i + 1);
        scanf("%s", c.dept[i].name);
        printf("Enter head of department %d: ", i + 1);
        scanf("%s", c.dept[i].head);
    }

    printf("\nCompany: %s\n", c.cname);
    printf("Departments:\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s (Head: %s)\n", i + 1, c.dept[i].name, c.dept[i].head);
    }

    return 0;
}