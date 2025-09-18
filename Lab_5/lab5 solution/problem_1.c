// Write a C program that, given a array of n numbers, counts and prints the number of negative numbers
// and the number of positive numbers.
// Test your program with this array:
// {3,−4,−6, 9, 0, 7, 2, 10,−2,−1}

#include <stdio.h>

int main(){

    int arr[]={3,-4,-6,9,0,7,2,10,-2,-1};
    int j=0;

   for(int i=0;i<10;i++){
    if(arr[i]>=0){
        j=j+1;
    }
   }
 int k=10-j;
   printf("positive number is %d & negative number is %d",j,k);
   return 0;
}