#include<stdio.h>

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact *=i;
    }

    printf("Factorial is %d",fact);
}