#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 0;
    double sum = 0;
    double x = 0.1;
    double power = 1;
    double factorial = 1;

    printf("Kaç tane terim olsun? ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        sum += power * x / factorial;
        power *= -1;
        factorial *= k;
    }

    printf("Sonuç = %lf", sum);

    return 0;
}