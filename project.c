
#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main (void)
{
    float weight = 0.0;
    float height = 0.0;
    float BMI = 0.0;

    printf("please enter your weight in kg:  ");
    scanf("%f", &weight);
    printf("please enter your height in inches:  ");
    scanf("%f", &height);

    BMI = weight * 703 / (height * height);

    if(BMI <= 18.5)
        printf("\nYour BMI is %f:\n You are Underweight, please consider eating well.\n", BMI);
    else if(BMI <= 24.9)
        printf("\n Your BMI is %f:\n And its Normal, you can continue with your current diet.\n", BMI);
    else if(BMI <= 29.9)
        printf("\n Your BMI is %f:\n overweight please watch your Diet.\n", BMI);
    else
        printf("\n Your BMI is %f:\n obese you need to start losing weight like seriously..", BMI);

    return 0;
}