#include <stdio.h>
int main() {

float a, b, c;
//Asking the user to input the numbers
printf("Enter 1st Number\n");
scanf("%f", &a);

printf("Enter 2nd Number\n");
scanf("%f", &b);

// Swapping using a third variable
    c = a;
    a = b;
    b = c;
//output

printf("After Swap\n a =  %f", a );
printf("\nb = %f\n", b);
return 0;




}