#include <stdio.h>

void matrixAddition(int row, int col, int A[row][col], int B[row][col], int result[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void matrixSubtraction(int row, int col, int A[row][col], int B[row][col], int result[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void matrixTranspose(int row, int col, int A[row][col], int result[col][row]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = A[i][j];
        }
    }
}

void displayMatrix(int row, int col, int matrix[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col, choice;
    
    // Matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    
    // Matrices A and B
    int A[row][col], B[row][col], result[row][col];
    
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Menu
    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Transpose of Matrix A\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            matrixAddition(row, col, A, B, result);
            printf("Matrix Addition:\n");
            displayMatrix(row, col, result);
            break;
        
        case 2:
            matrixSubtraction(row, col, A, B, result);
            printf("Matrix Subtraction:\n");
            displayMatrix(row, col, result);
            break;
        
        case 3:
            // Transpose of A
            matrixTranspose(row, col, A, result);
            printf("Matrix Transpose of A:\n");
            displayMatrix(col, row, result);  // Notice row and col are swapped
            break;
        
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}