// swap two variables without using temp 

#include<stdio.h>

void main(){
    int num1,num2;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    num1 = num1 + num2;
    num2 = num1-num2;
    num1 = num1 - num2;

    printf("The variables after swapping \nnum1: %d \nnum2: %d\n",num1,num2);

}