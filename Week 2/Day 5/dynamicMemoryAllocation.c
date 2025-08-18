#include<stdio.h>
#include <stdlib.h>

int sum(int*ptr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum +=ptr[i];
    }
    return sum;
}

void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));

    printf("Enter the Elements of an array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    
    printf("Sum of all elements are %d",sum(ptr,n));
}