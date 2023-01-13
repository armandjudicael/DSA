//
// Created by kael on 1/13/23.
//
#include <stdio.h>
#include <stdlib.h>
#include "../header/Trace.h"
#include "../header/BasicMatrixOperation.h"
void MatrixTrace(){
    printf("\e[1;1H\e[2J");
    printf(" \n\n\n ###   MATRIX TRACE    ### \n\n\n");
    int columnNb =0;
    int rowNb = 0;
    int size = 0;
    printf("\n\n\n > Please enter the size (column*row) : ");
    scanf("%d",&size);
    float **m1 = createMatrix(size,size);
    printf("\n\n\n > Please enter the value of the (%d * %d) matrix : \n\n\n ",size,size);
    initMatrixValue(size,size,m1);
    float tr = trace(size,m1);
    printf("\n\n\n > the trace of the (%d * %d) matrix is : %f \n\n\n",size,size, tr);
    printf(" \n\n > Would you try again or go to main menu (0 - 1) : ");
    int choice = 0;
    scanf("%d",&choice);
    if(choice==1) MatrixTrace();
    else exit(0);
}

float trace(int size,float **m){
    float trace = 0;
    for (int i = 0; i < size; ++i){
          trace +=m[i][i];
    }
    return trace;
}
