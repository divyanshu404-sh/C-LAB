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

    int sum = 0; 
    for(int j = 0; j < n; j++)
        sum += matrix[0][j];

    int flag = 1; 

    
    for(int i = 1; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++)
        rowSum += matrix[i][j];
        if(rowSum != sum) {
            flag = 0;
            break;
        }
    }
    
    if(flag) {
        for(int j = 0; j < n; j++) {
            int colSum = 0;
            for(int i = 0; i < n; i++)
              colSum += matrix[i][j];
            if(colSum != sum) {
                flag = 0;
                break;
    }
    }
    }
    if(flag) {
        int diagSum = 0;
        for(int i = 0; i < n; i++)
            diagSum += matrix[i][i];
        if(diagSum != sum)
            flag = 0;
    }
    if(flag) {
        int secDiagSum = 0;
        for(int i = 0; i < n; i++)
            secDiagSum += matrix[i][n - 1 - i];
        if(secDiagSum != sum)
            flag = 0;
    }

    if(flag)
        printf("The matrix is a magic matrix.\n");
    else
        printf("The matrix is NOT a magic matrix.\n");

    return 0;
}