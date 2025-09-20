#include <stdio.h>
int main() {

float a,b ; 

//TAKING LENGTH AND BREADTH AS INPUT FROM THE USER
printf("Enter the length of the  Rectangle\n");
scanf("%f", &a);
printf("Enter the breadth of the Rectangle\n");
scanf("%f", &b);

//CALCULATING AREA AND PERIMETER
//AREA = LENGTH * BREADTH
printf("AREA = %f\n", a*b);
//PERIMETER = 2 * (LENGTH + BREADTH)
printf("PERIMETER = %f\n", 2 * (a+b) );

return 0;

}