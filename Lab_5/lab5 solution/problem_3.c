// Update Q1 to output two arrays:
//   • one array containing only the negative numbers,
//   • another array containing the non-negative numbers.

#include <stdio.h>

int main(){

    int arr1[]={3,-4,-6,9,0,7,2,10,-2,-1};
    int arr2[6];
    int arr3[4];
    int i,j=0,k=0;
    for(i=0;i<10;i++){

        if(arr1[i]>=0){
        arr2[j++]=arr1[i];

    }
        else{
            
            arr3[k++]=arr1[i];
        
    }
    }
    for(i=0;i<j;i++){
        printf("%d,",arr2[i]);
    }
    printf("\n");
    for(i=0;i<k;i++){
        printf("%d,",arr3[i]);
    }
        return 0;
    }
   