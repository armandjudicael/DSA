//
// Created by kael on 1/5/23.
//

#include <stdio.h>
#include "../header/MatrixAddition.h"
#include "../header/BasicMatrixOperation.h"

float ** add (int columnNb , int rowNb,float **first , float **second ){
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            first [i][j] = first [i][j] + second[i][j];
        }
    }
    return first;
}
void matrixAddition(){
    printf(" \n\n\n ###   MATRIX ADDITION   ### \n\n\n");
    printf( "  it is a square matrix ? ( 0 - 1 ) :   \n" );
    int isSquareMatrix = 0;
    scanf("%d", &isSquareMatrix);
    int size = 0;
    if(isSquareMatrix == 1){
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
        int columnNb = 0;
        int rowNb = 0;
        scanf("%d", &columnNb);
        printf("\n\n\n > Please enter the row number : ");
        scanf("%d", &rowNb);
        float **m1 = createMatrix(columnNb,rowNb);
        float **m2 = createMatrix(columnNb,rowNb);
        printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",columnNb,rowNb);
        initMatrixValue(columnNb,rowNb,m1);
        printf("\n\n\n > Please enter the value of the second (%d * %d) matrix : \n\n\n ",columnNb,rowNb);
        initMatrixValue(columnNb,rowNb,m2);
        float **result = add(columnNb,rowNb,m1,m2);
        show(result,size,size);
    }

}
