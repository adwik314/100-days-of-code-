#include <stdio.h>
int main() {

float a, b;
//Asking the user to input the numbers
printf("Enter 1st Number\n");
scanf("%f", &a);

printf("Enter 2nd Number\n");
scanf("%f", &b);

//swapping without third variable
b = b + a;
a = b - a;
b = b - a;

//output
printf("After Swap\n a =  %f", a );
printf("\nb = %f", b);
return 0;




}