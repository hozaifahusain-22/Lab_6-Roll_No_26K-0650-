#include <stdio.h>

#define N 12

int main() {
    int cars[N];
    int i, sum = 0, overloaded = 0, maxCars, minCars, maxSignal, minSignal;
    float average;

    for (i = 0; i < N; i++) {
        printf("Enter cars waiting at signal %d: ", i + 1);
        scanf("%d", &cars[i]);
    }

    for (i = 0; i < N; i++) {
        sum += cars[i];
    }
    average = (float)sum / N;
    printf("\nAverage cars waiting: %.2f\n", average);

    maxCars = minCars = cars[0];
    maxSignal = minSignal = 1;

    printf("\nOverloaded signals: ");
    for (i = 0; i < N; i++) {
        if (cars[i] > average) {
            printf("%d ", i + 1);
            overloaded++;
        }
        if (cars[i] > maxCars) {
            maxCars = cars[i];
            maxSignal = i + 1;
        }
        if (cars[i] < minCars) {
            minCars = cars[i];
            minSignal = i + 1;
        }
    }

    printf("\nTotal overloaded signals: %d\n", overloaded);
    printf("Highest: Signal %d with %d cars\n", maxSignal, maxCars);
    printf("Lowest: Signal %d with %d cars\n", minSignal, minCars);
    printf("Difference (highest - lowest): %d\n", maxCars - minCars);

}