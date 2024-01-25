#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

int main() {
    int mat1[2][3], mat2[3][4], mat3[2][4];
    srand(time(NULL)); //seed
    FILE *file1 = fopen("matrix1.txt", "r");
    FILE *file2 = fopen("matrix2.txt", "r");
    

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++) {
            mat1[i][j] = rand() % 5;
            fscanf(file1, "%d", &mat1[i][j]);

        }
    }

    fclose(file1);

    printf ("Matrix 1:\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++) {
            mat2[i][j] = rand() % 5;
            fscanf(file2, "%d", &mat2[i][j]);

        }
    }

    fclose(file2);

    printf ("Matrix 2:\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf ("Matrix 3:\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<4   ; j++) {
            printf("%d " , mat3[i][j]);

            int sum = 0;
            for (int k=0; k<3; k++){ 
                sum += mat1[i][k] * mat2[k][j];
            }
            mat3[i][j]=sum;
        }
        printf("\n");
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            printf("%d " , mat3[i][j]);
        }
        printf("\n");
    }

    return (0);

}