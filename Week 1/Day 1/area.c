// calculate area and perimeter of a circle

#include<stdio.h>
#include<conio.h>

void main(){
    int radius;
    printf("Enter the Radius of the circle: ");
    scanf("%d",&radius);
    
    float perimeter = 2* 3.14*radius;
    // perimeter 
    printf("The perimeter of the cirlce is %.2f\n",perimeter);

    //area
    float area = 3.14 * radius * radius;
    printf("The area of the cirlce is %.2f\n",area);
}