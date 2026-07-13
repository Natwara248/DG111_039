#include <stdio.h>

int main()
{

    int weight_kg = 70;
    float height_cm = 175;
    printf("\n weight :");
    scanf("%d", &weight_kg);
    printf("\n height:");
    scanf("%f", &height_cm);

    float height_m = height_cm / 100.0;
    printf("70/ 175 * 175 = %d\n");

    float BMI = weight_kg / (height_m * height_m);
    printf("Input Weight (kg): 70\n ");
    printf("Input Height (cm): 175\n ");
    printf("Output BMI:  %f→ Normal ✓\n", BMI);
}