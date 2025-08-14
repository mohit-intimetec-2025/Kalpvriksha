#include<stdio.h>

void main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    print("Sum is %d",sum);
}