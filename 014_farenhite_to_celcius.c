#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in farenhite: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Temperature in celcius = %.2f°C\n", c);

    return 0;
}