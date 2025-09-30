#include <stdio.h>

int main(){

    int m,n,p;
    printf("Enter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter p: ");
    scanf("%d", &p);

    int matrix1[m][n];
    int matrix2[n][p];
    
    
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
int matrix3[m][p];

for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        matrix3[i][j]=0;
    }
}

for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            for(int k = 0; k < n; k++){
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
      }
    }

for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}