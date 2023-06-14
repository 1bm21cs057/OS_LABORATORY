#include<stdio.h>
#include<conio.h>
void add(int matrix1[3][3], int matrix2[3][3])
{
    int sum[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("\t%d",sum[i][j])
            }
}
}

void subtract(int matrix1[3][3], int matrix2[3][3])
{
    int diff[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            diff[i][j]=matrix1[i][j]-matrix2[i][j];
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("\t%d",diff[i][j]);
            }
}
}

void multiply(int matrix1[3][3], int matrix2[3][3])
{
    int product[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            product[i][j]=0;
            {
                for(int k=0;k<3;k++){
                    product[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
    }
     for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("\t%d",product[i][j]);
            }
}
}

void sumOfRowsColumns(int matrix[3][3])
{
    int row_sum[3][4],column_sum[3][4],rowsum,columnsum;
    for(int i=0;i<3;i++){
        rowsum=0,columnsum=0;
        for(int j=0;j<3;j++){
            rowsum+=matrix[i][j];
            columnsum+=matrix[j][i];
        }
        row_sum[i][4]=rowsum;
        column_sum[i][4]=columnsum;
        
    }
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<4;j++){
            printf("\t%d",row_sum[i][j]);
            }
}
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<4;j++){
            printf("\t%d",column_sum[i][j]);
            }
}
    
}

void transpose(int matrix[3][3])
{
    int transpose[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("\t%d",transpose[i][j]);
            }
}
}

void checkSymmetric(int matrix[3][3])
{
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]!=matrix[j][i]){
                printf("\nAsymmetric matrix");
                return;
            }
        }
    }
    printf("\nMatrix is symmetric");
}

void sumOfDiagonals(int matrix[3][3])
{
    int sum=0,a=0;
     for (int i=0;i<3;++i) {
            
            sum = sum + matrix[i][i];
            a = a + matrix[i][3 - i - 1];
        }
        
        
        printf("\nMain diagonal elements sum is = %d\n", sum);
        printf("Off-diagonal elements sum is = %d\n", a);
    }
}
