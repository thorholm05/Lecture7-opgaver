#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 10
#define DICE_SIDES 6

void roll_multiple_dies(int n, int *dice);

int main(void) {
    int n;

    // Indlæs antal terninger
    printf("Indtast antal terninger: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Ugyldigt antal terninger.\n");
        return 1;
    }

    // Alloker plads til n terninger
    int *dice = malloc(n * sizeof(int));

    // Kontroller at allokeringen lykkedes
    if (dice == NULL) {
        printf("Hukommelsesallokering fejlede.\n");
        return 1;
    }

    // Initialiser tilfældige tal
    srand(time(NULL));

    // Kast alle terninger 10 gange
    for (int i = 0; i < ROLLS; i++) {
        roll_multiple_dies(n, dice);

        // Udskriv resultaterne
        printf("Kast %d: ", i + 1);

        for (int j = 0; j < n; j++) {
            printf("%d ", dice[j]);
        }

        printf("\n");
    }

    // Frigiv hukommelsen
    free(dice);

    return 0;
}

// Kast n terninger og gem resultaterne i arrayet
void roll_multiple_dies(int n, int *dice) {
    for (int i = 0; i < n; i++) {
        dice[i] = rand() % DICE_SIDES + 1;
    }
}