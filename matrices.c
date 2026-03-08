#include <stdio.h>
#define SIZE 5

/*Printing matrix*/
void printMatrix(int arr[][SIZE]){
    int i,j;
    for (i=0;i<SIZE;i++){
        
        for (j=0;j<SIZE;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

/*Adding matrices*/
void addMatrices(int arr1[][SIZE],int arr2[][SIZE]){
    int sumArr[SIZE][SIZE];
    int i,j;
    for (i=0;i<SIZE;i++){
        for (j=0; j<SIZE;j++){
            sumArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }   
    printMatrix(sumArr);
}

/*Multiplying matrices*/
void multiplyMatrices(int arr1[][SIZE], int arr2[][SIZE]){
    //Initialize new product matrix to have all 0s, then add values accordingly
    int productArr[SIZE][SIZE] = {0};

    int i,j, k;

    for (i=0;i<SIZE;i++){
        for (j=0;j<SIZE;j++){
            for (k=0;k<SIZE;k++){
                productArr[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }
    printMatrix(productArr);
}

/*Transposing a maxtrix*/
void transposeMatrix(int arr[][SIZE]){
    int newArr[SIZE][SIZE];
    int i,j;

    for (i=0;i<SIZE;i++){
        for (j=0;j<SIZE;j++){
            newArr[i][j] = arr[j][i];
        }
    }
    printMatrix(newArr);
}


int main(){
    int m1[SIZE][SIZE] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    
    int m2[SIZE][SIZE] = {
        {25,24,23,22,21},
        {20,19,18,17,16},
        {15,14,13,12,11},
        {10,9,8,7,6},
        {5,4,3,2,1}
    };

    //Matrices added
    printf("Matrices Added Together: \n");
    addMatrices(m1,m2);
    printf("\n\n");

    //Matrices multiplied
    printf("Matrices Multiplied Together: \n");
    multiplyMatrices(m1,m2);
    printf("\n\n");

    //Transpose Matrix m1, will turn to matrix m2
    printf("Matrix 1 Transposed: \n");
    transposeMatrix(m1);
    printf("\n\n");
}