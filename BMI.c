// BMI.c
#include "BMI.h"

float calculate_bmi(float weight, float height) {
    return weight / (height * height);
}

const char* determine_health_status(float bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        return "Normal weight";
    } else if (bmi >= 25 && bmi < 29.9) {
        return "Overweight";
    } else {
        return "Obesity";
    }
}