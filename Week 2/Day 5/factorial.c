#include<stdio.h>

int factorial(int n){
  if(n==1 || n==0)
      return 1 ;
    
  return factorial(n-1) * n;
}

void main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("%d",factorial(n));
}