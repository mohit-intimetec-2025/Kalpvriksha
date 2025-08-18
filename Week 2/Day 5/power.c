#include<stdio.h>

int power(int a,int b){
    int result =1;
    if(b == 0) return 1;
    if(b<0) return -1;

    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}
void main(){
    int a,b;

    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);

    printf("The result is: %d",power(a,b));

}