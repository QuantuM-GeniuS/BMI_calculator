#include <stdio.h>

/*BMI CALCULATOR 
Keep your mass in kilograms and height
in metres ready with you!*/

int main()
{
    float mass, height;
    printf("Let's calculate your Body Mass Index(B.M.I.)\n");
    printf("\n");
    printf("A BMI below 18 depicts that you are Underweght.\n");
    printf("A BMI from 18 to 25 indicates that you are Fit.\n");
    printf("A BMI above 25 means that you are obese.\n");
    printf("\n");
    printf("Enter your MASS in kilograms.\n");
    scanf("%f", &mass);
    printf("\n");
    printf("Now enter your height in metres.\n");
    scanf("%f", &height);
    printf("\n");
    printf("Your BMI is %f\n", mass / (height * height));
    printf("\n");
    printf("Check your physical fitness status using above data and plan out a good diet and routine for yourself.\n");
    printf("\n");
    printf("Thanks for taking the test!\n");

    system("pause"); 
    return 0;
}