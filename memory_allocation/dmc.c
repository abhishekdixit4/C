#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Dynamic memory allocation using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Return error
    }

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory
    free(arr);

    return 0;
}