#include <stdio.h>
int main (){
 
float celsius;
//Asking the user to enter the temperature in celsius
printf("Enter the Temperature in Celsius\n");
scanf("%f", &celsius);  


//conversion of celsius to fahrenheit  = (celsius * 9/5) + 32
printf("Temperature in Fahrenheit = %f\n", (celsius * 9/5) + 32 );

return 0;


}