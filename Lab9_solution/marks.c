//Structure Array – Marks Calculation: Define a structure Marks with fields for three subjects. Read
//and store marks of 5 students, compute total and average marks for each student, and display the results
//neatly.

#include <stdio.h>

struct Marks {
    int s1, s2, s3;
    int total;
    float avg;
};

int main() {
    struct Marks m[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter marks of 3 subjects for student %d: ", i + 1);
        scanf("%d %d %d", &m[i].s1, &m[i].s2, &m[i].s3);

        m[i].total = m[i].s1 + m[i].s2 + m[i].s3;
        m[i].avg = m[i].total / 3.0;
    }

    printf("\nStu\tTotal\tAverage\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%d\t%.2f\n", i + 1, m[i].total, m[i].avg);
    }

    return 0;
}