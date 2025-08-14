#include<stdio.h>

void main(){
    int num;
    printf("Enter the number between 1 to 10: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d x %d : %d\n",num,i,num*i);
    }
}