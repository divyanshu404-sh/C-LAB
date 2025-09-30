#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    
    
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int diag=0;
        for(int j=0;j<n;j++){
            if(i!=j){
            sum+=matrix[i][j];
        }
            else{
             diag=matrix[i][j];
            }
        }
        if(diag<=sum){
            count=1;
            break;
        }
    }
    if(count==0){
        printf("It is diagonally dominant matrix\n");
    }
else{
    printf("Not diagonal dominant matrix\n");
}
return 0;
        
    }