#include<stdio.h>

void main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%2){
        printf("%d is an odd number",num);
    }else{
        printf("%d is an even number",num);
    }
}
