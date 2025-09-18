// Write a C program that takes as input a array and returns another array that contains each element
// of the original array twice.
// Example:
//         Input: {2, 3, 1}
//         Output: {2, 2, 3, 3, 1, 1}

#include <stdio.h>

int main(){

    int arr1[3];
    
    int l=0,m=0;

    for(int i=0;i<3;i++){
        printf("Enter %d element of array\n ",i);
        scanf("%d",&arr1[i]);
    }
    int arr2[6];
    for(int j=0;j<6;j=j+2){
        arr2[j]=arr1[l++];
    }

    for(int j=1;j<6;j=j+2){
        arr2[j]=arr1[m++];
    }
        
    for(int k=0;k<6;k++){
    printf("%d,",arr2[k]);
    }
    return 0;
}