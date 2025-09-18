// Write a C program to check whether a given array of integers is a palindrome array. (An array is
// palindrome if the first element equals the last, the second equals the second last, and so on.)
// Example:
//       {1, 2, 3, 2, 1}→Palindrome
//       {1, 2, 3, 4}→Not Palindrome

#include <stdio.h>

int main(){

    int arr[5];
    for(int i=0;i<5;i++){
    printf("Enter %d element of array: \n",i);
    scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=arr[4-i])
        count=1;
        break;
    }
    if(count==1){
        printf(" Not Palindrone\n");
    }
    else{
        printf("Palindrone\n");
    }
    return 0;
}