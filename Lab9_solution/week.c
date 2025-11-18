//Enum with Switch – Days of Week: Create an enum Days with values MONDAY to SUNDAY. Ask the user
// to enter a number (1–7) and display the corresponding day name. Use switch-case and enum together.

#include <stdio.h>

enum Days { MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    enum Days day;
    int n;

    printf("Enter a number (1-7): ");
    scanf("%d", &n);
    day = n;

    switch (day) {
        case MONDAY:    printf("Monday\n"); break;
        case TUESDAY:   printf("Tuesday\n"); break;
        case WEDNESDAY: printf("Wednesday\n"); break;
        case THURSDAY:  printf("Thursday\n"); break;
        case FRIDAY:    printf("Friday\n"); break;
        case SATURDAY:  printf("Saturday\n"); break;
        case SUNDAY:    printf("Sunday\n"); break;
        default:        printf("Invalid number\n");
    }

    return 0;
}