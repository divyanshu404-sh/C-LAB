// 1. WAP in C that takes input length and width from the user.
// For each of the following expressions, determine the output value and the data type of the result.
// • length / 3
// • width / 2
// • length / 3.0
// • length / width
// • (width + length) / length > length / width

#include <stdio.h>

int main(){

    float length, width ;

    printf("Enter length:\n");
    scanf("%f",&length);

    printf("Enter width:\n");
    scanf("%f",&width);

    printf("length/3 is %f\n",length/3);
    printf("width/2 is %f\n",width/2);
    printf("length/3.0 is %f\n",length/3.0);
    printf("length/width is %f\n",length/width);

    if(((width + length)/ length)>length){
        printf("(width + length) / length > length");
    }
    else if(((width + length)/ length)<length){
        printf("((width + length)/ length)<length");
    }

    return 0;
}