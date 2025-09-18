//Write a C program that prompts the user to enter 5 numbers, stores them in an array, and then prints:
//   • the array of numbers,
//   • the maximum number,
//   • the minimum number,
//   • the sum of the numbers.

#include <stdio.h>

int main(){

    int arr[5];

    for(int i=0;i<5;i++){
        printf("Enter %d element of array\n ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d,",arr[i]);
}
    int k;
    int max=arr[0];
    for(k=0;k<5;k++){  
        if(max<arr[k]){
            max=arr[k];
            ;
        }
    }
    printf("\nmaximum nuber is %d\n",max);

    int j;
    int min=arr[0];
    for(j=0;j<5;j++){
        if(min>arr[j]){
            min=arr[j];
        }
    }
    printf("minimum number is %d\n",min);

    int sum=0;
    for(int p=0;p<5;p++){
        sum=sum+arr[p];
    }
    printf("Sum of all elemets is %d",sum); 

    return 0;
} 