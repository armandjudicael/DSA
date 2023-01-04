#include <stdio.h>
#include<stdlib.h>
int columnNb=0;
int rowNb=0;
int isSquareMatrix = 0;
int size=0;
char matrixName[10];

void matrixMultiplication();

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

float ** add (int columnNb , int rowNb,float **first , float **second ){
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            first [i][j] = first [i][j] + second[i][j];
        }
    }
    return first;
}

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

void show(float **m,int columnNb , int rowNb){
    for (int i = 0; i < columnNb; ++i) {
        for (int j = 0; j < rowNb; ++j) {
            printf("%1f \t",m[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication() {
    system("clear | cls");
    printf(" \n\n\n ###   MATRIX MULTIPLICATION   ### \n\n\n");
    printf("\n\n\n > Please enter the size (column*row) : ");
    scanf("%d",&size);
    float **m1 = createMatrix(size,size);
    float **m2 = createMatrix(size,size);
    printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
    initMatrixValue(size,size,m1);
    printf("\n\n\n > Please enter the value of the first (%d * %d) matrix : \n\n\n ",size,size);
    initMatrixValue(size,size,m2);
    float **result = multiply(size,size,m1,m2);
    show(result,size,size);
}

void matrixAddition(){
    system("clear");
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
}

void initMenu(){
    printf(" \n\n\n ###   WELCOME TO MY CONSOLE BASIC MATRIX OPERATION   ### \n\n\n");
    printf(" \t\t 1- addition  \n");
    printf(" \t\t  2- Substraction  \n");
    printf(" \t\t 3- Mutliplication  \n");
    printf(" \t\t 4- Trace  \n");
    printf(" \t\t 5- Inversion  \n");
    printf(" \t\t  6- System resolution  \n");
    printf(" \t\t 7- Valeur propre  \n");
    printf(" \t\t 8- Diagonalisation \n");
    printf(" \t\t 9- Exit \n");
    int choice = 0;
    printf( " Please choose a number between ( 1 -8 ) : " );
    scanf("%d",&choice);
    switch (choice) {
        case 1 : {
            matrixAddition();
            break;}
        case 3 : {
            matrixMultiplication();
            break;
        }
        default: exit(0);
    }
}



int main(){
    initMenu();
   return 0;
}
