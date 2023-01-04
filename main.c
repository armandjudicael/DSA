#include <stdio.h>
#include <malloc.h>
int columnNb = 0;
int rowNb = 0 ;
int isSquareMatrix = 0;
int size = 0;
char matrixName[10];

float **createMatrix(int columnNb,int rowNb){
    float **matrix = malloc(columnNb*sizeof(float));
    for (int i = 0; i <rowNb; ++i) {
        matrix[i] = malloc(sizeof(float));
    }
    return matrix;
}

void initMatrixValue(int columnNb , int rowNb,float **m){
    for (int i = 0; i < columnNb; ++i){
        for (int j = 0; j < rowNb; ++j){
            printf("[%d][%d] = ",i,j);
            scanf("%f",&m[i][j]);
        }
        printf("\n");
    }
}

float ** add (int columnNb , int rowNb,float **first , float **second ){
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            first [i][j] = first [i][j] + second[i][j];
        }
    }
    return first;
}

void show(float **m,int columnNb , int rowNb){
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            printf("%1f \t",m[i][j]);
        }
        printf("\n");
    }
}


int main(){
    printf(" \n\n\n ###   MATRIX ADDITION   ### \n\n\n");
    printf( "  it is a square matrix ? ( 0 - 1 ) :   \n" );
    scanf("%d",&isSquareMatrix);
    if(isSquareMatrix==1){
        printf("\n\n\n > Please enter the size (column*row) : ");
        scanf("%d",&size);
        float **m1 = createMatrix(size,size);
        float **m2 = createMatrix(size,size);
        printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
        initMatrixValue(size,size,m1);
        printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
        initMatrixValue(size,size,m2);
        float **result = add(size,size,m1,m2);
        show(result,size,size);
    } else{
        printf("\n\n\n > Please enter the column number : ");
        scanf("%d",&columnNb);
        printf("\n\n\n > Please enter the row number : ");
        scanf("%d",&rowNb);
        float **m1 = createMatrix(columnNb,rowNb);
        float **m2 = createMatrix(columnNb,rowNb);
    }
   return 0;
}
