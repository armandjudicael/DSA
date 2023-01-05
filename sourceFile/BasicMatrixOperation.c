//
// Created by kael on 1/5/23.
//

#include <malloc.h>
#include "../header/BasicMatrixOperation.h"
float **createMatrix(int columnNb, int rowNb){
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

void show(float **m,int columnNb , int rowNb){
    printf(" \t\t >  The result of the operation is : \n\n\n");
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            printf("\t %1f ",m[i][j]);
        }
        printf("\n");
    }
}
