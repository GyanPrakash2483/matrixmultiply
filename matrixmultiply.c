#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a, b, c, d;
    printf("Enter number of rows in first matrix: ");
    scanf("%d", &a);

    printf("Enter number of columns in first matrix: ");
    scanf("%d", &b);

    printf("Enter number of rows in second matrix: ");
    scanf("%d", &c);

    printf("Enter number of columns in second matrix: ");
    scanf("%d", &d);

    if(b != c) {
        printf("Cannot multiply a matrix of size %d x %d with %d x %d\n", a, b, c, d);
        exit(1);
    }

    int m1[a][b];
    int m2[c][d];

    printf("Enter values for first matrix:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("Row %d Column %d: ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }

    //print m1
    for(int i = 0; i < a; i++) {
        printf("|");
        for(int j = 0; j < b; j++) {
            printf(" %d ", m1[i][j]);
        }
        printf(" |\n");
    }

    printf("Is this input correct? (y/n): ");
    char res;
    scanf("%c", &res);
    scanf("%c", &res);
    if(res != 'y') {
        printf("Aborting due to incorrect input\n");
        exit(1);
    }

    printf("Enter values for second matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < d; j++) {
            printf("Row %d Column %d: ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }

    //print m2
    for(int i = 0; i < c; i++) {
        printf("|");
        for(int j = 0; j < d; j++) {
            printf(" %d ", m2[i][j]);
        }
        printf(" |\n");
    }

    printf("Is this input correct? (y/n): ");
    
    scanf("%c", &res);
    scanf("%c", &res);
    if(res != 'y') {
        printf("Aborting due to incorrect input\n");
        exit(1);
    }

    int mproduct[a][d];

    int mularray1[b];
    int mularray2[c];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < d; j++) {
            for(int k = 0; k < b; k++) {
                mularray1[k] = m1[i][k];
            }
            for(int k = 0; k < c; k++) {
                mularray2[k] = m2[k][j];
            }
            mproduct[i][j] = 0;
            for(int k = 0; k < b; k++) {
                mproduct[i][j] += (mularray1[k] * mularray2[k]);
            }
        }
    }


    printf("Product of both matrices is: \n");
    //print mproduct
    for(int i = 0; i < a; i++) {
        printf("|");
        for(int j = 0; j < d; j++) {
            printf(" %d ", mproduct[i][j]);
        }
        printf(" |\n");
    }

    return 0;
}
