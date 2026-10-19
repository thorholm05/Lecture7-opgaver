#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int compare_doubles(const void *a, const void *b);

int main(void) {
    double *numbers = malloc(SIZE * sizeof(double));

    if (numbers == NULL) {
        printf("Hukommelsesallokering fejlede.\n");
        return 1;
    }

    // Initialiser tilfældige tal
    srand(time(NULL));

    // Fyld arrayet med tilfældige tal
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = (double) rand() / RAND_MAX * 100;
    }

    // Udskriv tallene før sortering
    printf("Inden sortering:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", numbers[i]);
    }

    // Sorter med qsort
    qsort(numbers, SIZE, sizeof(double), compare_doubles);

    // Udskriv tallene efter sortering
    printf("\n\nEfter sortering:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", numbers[i]);
    }

    free(numbers);

    return 0;
}

//qsort sortering
int compare_doubles(const void *a, const void *b) {
    double x = *(const double *)a;
    double y = *(const double *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}
