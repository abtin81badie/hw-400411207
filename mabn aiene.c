#include<stdio.h>

int main(void){
    float weigh_in_kg;
    float heigh_in_meters;

    //printf("please enter your weigh in kg:\n");
    scanf("%f",&weigh_in_kg);

    //printf("please enter your heigh in meter:\n");
    scanf("%f",&heigh_in_meters);

    float BMI=(weigh_in_kg)/(heigh_in_meters*heigh_in_meters);

    printf("%.4f",BMI);
    printf("\n");
   
    if (BMI<18.5) {
        printf("Underweight\n");
    }

    if ((BMI>=18.5) && (BMI<=24.9)) {
        printf("NORMAL\n");
    }

    if ((BMI>=25) && (BMI<=29.9)) {
        printf("Overweigh\n");
    }

    if (BMI>=30) {
        printf("Obese\n");
    }


    return 0;
}