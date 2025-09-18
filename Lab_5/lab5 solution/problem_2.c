// Write a C program that, given a array of n numbers, outputs another array that contains the cumu-
// lative sum.
// Example:
//.      Input: {3, 4, 6, 9, 0, 7, 2, 10, 2, 1}
//       output: {3, 7, 13, 22, 22, 29, 31, 41, 43, 44}

#include <stdio.h>

int main(){

   int arr[]={3,4,6,9,0,7,2,10,2,1};
   int arr2[10];
   for(int i=0;i<10;i++){
    arr2[i]=arr2[i-1]+arr[i];
    printf("%d,",arr2[i]);
   }
   return 0;
}