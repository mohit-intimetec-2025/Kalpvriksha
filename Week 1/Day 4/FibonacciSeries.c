#include<stdio.h>

void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int a =0;
    int b =1;
    printf("%d   %d  ",a,b);
    for(int i =2;i<=n;i++){
        int temp = b;
        
        b = a+b;
        a =temp;
        printf("%d  ",b);
    }
}