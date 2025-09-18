//Write a C program to remove duplicate elements from an array.
//Example:
//     Input:{1, 2, 2, 3, 4, 4, 5}
//     Output:{1, 2, 3, 4, 5}

#include <stdio.h>

int main(){

    int arr1[7]={1,2,2,3,4,4,5};
    int j=1;
    for(int i=0;i<6;i++){
        if(arr1[i]!=arr1[i+1]){
            j++;
        }
    }
    int arr2[j];
    int k=0;
    for(int i=0;i<7;i++){
            if(arr1[i]!=arr1[i+1]){
                arr2[k]=arr1[i];
                k++;
            }
    }
    for(int p=0;p<j;p++){
    printf("%d,",arr2[p]);
}
    return 0;
}