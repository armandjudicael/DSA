//
// Created by kael on 1/5/23.
//

#include <stdio.h>
#include "../header/MatrixMultiplication.h"
#include "../header/BasicMatrixOperation.h"

float ** multiply( int columnNb,int rowNb, float **first , float **second){
    float temp = 0;
    float **result = createMatrix(columnNb,rowNb);
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            result[i][j]=0;
            for (int k = 0; k < columnNb; ++k) {
                result[i][j]+=first[i][k]*second[k][j];
            }
        }
    }
    return result;
}
void matrixMultiplication() {
    printf(" \n\n\n ###   MATRIX MULTIPLICATION   ### \n\n\n");
    printf("\n\n\n > Please enter the size (column*row) : ");
    int size =0;
    scanf("%d", &size);
    float **m1 = createMatrix(size,size);
    float **m2 = createMatrix(size,size);
    printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
    initMatrixValue(size,size,m1);
    printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
    initMatrixValue(size,size,m2);
    float **result = multiply(size,size,m1,m2);
    show(result,size,size);
}
