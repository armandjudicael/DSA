#include <stdio.h>
#include <stdlib.h>
#include "header/substraction.h"
#include "header/BasicMatrixOperation.h"
#include "header/MatrixScalarMultiplication.h"
#include "header/MatrixMultiplication.h"
#include "header/MatrixAddition.h"

typedef struct matrix {
    int size;
    int isSquareMatrix;
    int columnNb;
    int rowNb;
    float **value;
    char matrixName[10];
};

void initMenu(){
    printf(" \n\n\n ###   WELCOME TO MY CONSOLE BASIC MATRIX OPERATION   ### \n\n\n");
    printf(" \t\t 1- addition  \n");
    printf(" \t\t 2- Substraction  \n");
    printf(" \t\t 3- Mutliplication  \n");
    printf(" \t\t 4- Trace  \n");
    printf(" \t\t 5- Inversion  \n");
    printf(" \t\t 6- System resolution  \n");
    printf(" \t\t 7- Valeur propre  \n");
    printf(" \t\t 8- Diagonalisation \n");
    printf(" \t\t 9- Multiplication par scalaire \n");
    printf(" \t\t 10- Exit \n");
    int choice = 0;
    printf( " Please choose a number between ( 1 -8 ) : " );
    scanf("%d",&choice);
    switch (choice) {
        case 1 : {
            matrixAddition();
            break;}
        case 2 : {
            matrixSubstraction();
            break;}
        case 3 : {
            matrixMultiplication();
            break;
        }
        case 9 : {
            matrixScalarMultiplication();
            break;
        }
        default: exit(0);
    }
}

int main(){
    initMenu();
   return 0;
}
