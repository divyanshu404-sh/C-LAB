#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element at row %d, column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int found = 0;

    for(int i = 0; i < m; i++) {
        
        int row_min = matrix[i][0];
        int col_index = 0;
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] < row_min) {
                row_min = matrix[i][j];
                col_index = j;
            }
        }

        int is_saddle = 1;
        for(int k = 0; k < m; k++) {
            if(matrix[k][col_index] > row_min) {
                is_saddle = 0;
                break;
            }
        }

        if(is_saddle) {
            printf("Saddle point is %d at row %d, column %d\n", row_min, i+1, col_index+1);
            found = 1;
        }
    }

    if(!found)
        printf("No saddle point in the matrix.\n");

    return 0;
}