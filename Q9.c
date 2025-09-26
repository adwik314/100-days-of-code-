#include <stdio.h>
#include <math.h>
int main () {
     
float principal, rate, time;

//taking input from the user
printf("Enter the Principal Amount\n");
scanf("%f", &principal);

printf("Enter the Rate of Interest\n");
scanf("%f", &rate);

printf("Enter Time in years\n");
scanf("%f", &time);

//Calculating SIMPLE INTEREST AND COMPUND INTEREST
float SI, CI;// SI = SIMPLE INTEREST AND  CI = COMPUND INTEREST
SI = principal * rate * time / 100;
CI = principal * pow((1 + rate/100),time) - principal;

printf("SIMPLE INTEREST = %f\n", SI);
printf("COMPOUND INTEREST = %f\n", CI);

return 0;
}
