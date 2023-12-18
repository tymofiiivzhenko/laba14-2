#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum, N;
    double average;
    printf("Enter the size of the massif: ");
    scanf("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("Enter the elements of the massif:\n");
    for (i = 0; i < N; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    int* ptr = A;
    sum = 0;
    for (i = 0; i < N; ++i) {
        sum += *ptr;
        ptr++;
    }

    average = sum / N;

    printf("\nAverage: %.2f\n", average);

    free(A);

    return 0;
}

