//
// Created by kael on 1/5/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "../header/BasicMatrixOperation.h"
float **scalarMultiplication(float scalar , int columnNb , int rowNb , float **m){
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            m[i][j] = scalar*m[i][j];
        }
    }
    return m;
}
void matrixScalarMultiplication(){
    printf(" \n\n\n ###   MATRIX SCALAR MULTIPLICATION  ### \n\n\n");
    printf( "  it is a square matrix ? ( 0 - 1 ) :   \n" );
    float scalar = 0.0;
    int isSquareMatrix = 0;
    scanf("%d", &isSquareMatrix);
    if(isSquareMatrix==1){
        printf("\n\n\n > Please enter the size (column*row) : ");
        int size = 0;
        scanf("%d", &size);
        float **m1 = createMatrix(size,size);
        printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
        initMatrixValue(size,size,m1);
        printf("\n\n\n > Please enter the scalar value : \n\n\n ");
        scanf("%f",&scalar);
        float **result = scalarMultiplication(scalar,size,size,m1);
        show(result,size,size);
    } else{
        printf("\n\n\n > Please enter the column number : ");
        int columnNb =0;
        scanf("%d", &columnNb);
        printf("\n\n\n > Please enter the row number : ");
        int rowNb = 0;
        scanf("%d", &rowNb);
        float **m1 = createMatrix(columnNb,rowNb);
        printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",columnNb,rowNb);
        initMatrixValue(columnNb,rowNb,m1);
        printf("\n\n\n > Please enter the scalar value : \n\n\n ");
        scanf("%f",&scalar);
        float **result = scalarMultiplication(scalar,columnNb,rowNb,m1);
        show(result,columnNb,rowNb);
    }
    printf(" \n\n > Would you try again or go to main menu (0 - 1) : ");
    int choice = 0;
    scanf("%d",&choice);
    if(choice==1) matrixScalarMultiplication();
    else exit(0);
}