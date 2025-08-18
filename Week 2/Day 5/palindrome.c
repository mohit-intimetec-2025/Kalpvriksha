#include<stdio.h>
#include<stdbool.h>
#include <string.h>

bool palindrome(char* str){
    int n = strlen(str);

    for(int i=0;i<n;i++){
        if(str[i] != str[n-i-1]){
            return false;
        }
    }
    return true;

}

void main(){
    char str[20];
    
    printf("Enter the sring: ");
    scanf("%s",&str);

    if(palindrome(str)){
        printf("The string is a palindrome");
    }else{
        printf("The string is not a palindrome");
    }
}