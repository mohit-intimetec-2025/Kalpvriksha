// leap year

#include<stdio.h>

void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if(year % 100 == 0){
        if(year%400 == 0){
            printf("its a leap year");
        }else{
            printf("Its not a leap year");
        }
    }else{
        if(year%4==0){
            printf("its a leap year");
        }else{
            printf("its not a leap year");
        }
    }
}