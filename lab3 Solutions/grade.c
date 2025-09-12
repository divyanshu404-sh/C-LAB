#include <stdio.h>
#include <string.h>

int main(){ 

    char* grade;

    printf("Enter your grade:\n");
    scanf("%s",&grade);

    if(strcmp(grade,"AA")==0){ //string comparision
        printf("Excellent");
    }

    if(strcmp(grade,"AB")==0){
        printf("Very Good");
    }

    if(strcmp(grade,"BB")==0){
        printf("Good");
    }

    if(strcmp(grade,"BC")==0){
        printf("Average");
    }

    if(strcmp(grade,"CC")==0){
        printf("Satisfatory");
    }

    if(strcmp(grade,"CD")==0){
        printf("Pass");
    }

    if(strcmp(grade,"DD")==0){
        printf("Just Pass");
    }

    else{
        printf("Fail");
    }

    return 0;
}