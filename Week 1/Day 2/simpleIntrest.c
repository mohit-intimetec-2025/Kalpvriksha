#include<stdio.h>
#include<conio.h>


void main(){
    // principle , rate , time in years 
    long int principle;
    float rate;
    float time;

    printf("Enter the principle amount: ");
    scanf("%d",&principle);

    printf("Enter the rate of intrest: ");
    scanf("%f",&rate);

    printf("Enter the time: ");
    scanf("%f",&time);

    float simpleIntrest = (principle * rate * time) /100.0;

    printf("The total payable amount is : %.2f ", principle+simpleIntrest);
    printf("\nThe simple intrest is : %.2f", simpleIntrest);



}