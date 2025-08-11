#include<stdio.h>
#include<conio.h>

void main(){
    char name[20];
    int age;

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Hello %s , How are you today! \nYour age is %d",name,age);
    getch();
}