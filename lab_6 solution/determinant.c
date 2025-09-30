#include <stdio.h>

int main(){

    int matrix[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
    printf("Enter the row%d col%d element of the matrix:\n",i,j);
    scanf("%d",&matrix[i][j]);
    }
}
    int sum=0;

    int det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1]) 
    - matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
                + matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);

                printf("Value of determinanat is %d",det);
} 