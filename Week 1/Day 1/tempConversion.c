// Temperature conversion 
#include<stdio.h>
#include<conio.h>

void main(){
    float temp;
    printf("Enter the temperature in Celcius : ");
    scanf("%f",&temp);

    // convert degree celcius to degree farhenite 
    // °F = (9/5 × °C) + 32.

    float farhenite = (9/5.0 * temp) +32;

    printf("The temperature in farhenite is : %.2f", farhenite);


}