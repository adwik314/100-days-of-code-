#include <stdio.h>
int main ()
{
float a, b ;
// INPUT 2 NUMBERS FROM THE USER
printf("Enter 1st Number\n");
scanf("%f", &a);
printf("Enter 2nd Number\n");
scanf("%f", &b);

//PERFORMING THE OPERATIONS
printf("Sum = %f\n" , a + b);
printf("Difference = %f\n" , a - b);
printf("Product = %f\n" , a * b);


 // Check for division by zero
    if (b != 0)
    {
        
        printf("Quotient = %f\n", a / b);
    } 
    else 
    {
        printf("Quotient = Undefined (cannot divide by zero)\n");
    }

   
  return 0;
}