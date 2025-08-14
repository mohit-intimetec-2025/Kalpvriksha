// grade calculator

#include<stdio.h>
void main(){
    int score;
    printf("Enter the score achived : ");
    scanf("%d",&score);

    if(score>=90){
        printf("Grade A");
    }else if(score>=80){
        printf("Grade: B");
    }else if(score>=70){
        printf("Grade: C");
    }else if(score>=60){
        printf("Grade: D");
    }else if(score >= 0){
        printf("Grade: F");
    }else{
        printf("Invalid score");
    }

}