//Q5. Enumerations in Practice: Use an enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN }.
//Write a program that:
//   • Takes a number (1–7) as input and prints the corresponding day.
//   • Prints whether the day is a weekday or weekend.

#include <stdio.h>

enum Days{MON=1,TUE,WED,THU,FRI,SAT,SUN};

int main(){

    enum Days day;

    printf("Enter day number(1-7): \n");
    scanf("%d",&day);

    switch(day){
        case MON: printf("Monday\n"); break;
        case TUE: printf("Tuesday\n"); break;
        case WED: printf("Wednesday\n"); break;
        case THU: printf("Thrusday\n"); break;
        case FRI: printf("Friday\n"); break;
        case SAT: printf("Saturday\n"); break;
        case SUN: printf("Sunday\n"); break;
        default : printf("Invalid input\n");
    }
    if(day>5){
        printf("WEEKEND\n");
    }
    else if(day>0 && day <6) {
        printf("WEEKDAY\n");
    }
    else{
        printf("Invalid input");
    }

    return 0;
}
