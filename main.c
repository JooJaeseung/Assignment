// main.c
#include <stdio.h>
#include "BMI.h"

int main() {
    float weight, height, bmi;
    const char* health_status;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (m): ");
    scanf("%f", &height);

    bmi = calculate_bmi(weight, height);
    health_status = determine_health_status(bmi);

    printf("Your BMI is: %.2f\n", bmi);
    printf("Health Status: %s\n", health_status);

    return 0;
}