#include<stdio.h>
void multiply(){
    int arow;   // Matrix 1.
    int acol;
    printf("Enter the no. of rows and columns of matrix 1:\n ");
    scanf("%d %d",&arow,&acol);
    int matrix1[arow][acol];
    printf("Enter the element of the matrix 1:\n");
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&matrix1[i][j]);
            
        }
    }
    int brow;   // Matrix 2.
    int bcol;
    printf("Enter the no. of rows and columns of matrix 2: \n");
    scanf("%d %d",&brow,&bcol);
    int matrix2[brow][bcol];
    printf("Enter the element of matrix 2: \n");
    for(int i=0;i<brow;i++){
        for(int j=0;j<bcol;j++){
            scanf("%d",&matrix2[i][j]);
            }
        }
    
    // Multiplication process.
    int result[arow][bcol];
     int sum=0;
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            for(int k=0;k<bcol;k++){
               sum =sum + matrix1[i][k]*matrix2[k][j];
               result[i][j]=sum;
            }
            sum=0;
        }
    }
    // Displaying the resultant matrix.
    printf("Resultant Matrix: \n");
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    multiply();
    
return 0;
}
