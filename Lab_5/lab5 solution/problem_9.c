//Write a C program to find the intersection of two arrays (common elements).
//Example:
//      Input: {1, 2, 3, 4}, {3, 4, 5, 6}
//      Output: {3, 4}

#include <stdio.h>

int main(){

    int arr1[4],arr2[4];

    for(int i=0;i<4;i++){
    printf("Enter %d element of array1: \n",i);
    scanf("%d",&arr1[i]);
    }

    for(int j=0;j<4;j++){
    printf("Enter %d element of array2: \n",j);
    scanf("%d",&arr2[j]);
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr1[i]==arr2[j]){
            printf("%d,",arr1[i]);
        }
        }
    }
    return 0;
}
