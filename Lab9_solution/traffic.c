// Enumeration Example – Traffic Signal: Define an enum for traffic light colors: RED, YELLOW, and
// GREEN. Write a program that uses a switch statement to print the corresponding action for each color:
//    • RED → Stop
//    • YELLOW → Ready
//    • GREEN → Go

#include <stdio.h>

enum light{RED=1,YELLOW,GREEN};

int main(){

    int n;
    printf("Enter colour\n1 for Red\n2 for Yellow\n3 for Green\n");
    scanf("%d",&n);

    switch(n){

        case RED: printf("STOP!!!\n"); break;
        case YELLOW: printf("Get Ready to GO...\n"); break;
        case GREEN: printf("GO--\n"); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}