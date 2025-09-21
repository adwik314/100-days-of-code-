#include <stdio.h>
int main ()
{
  float PI, r;// r = radius
   PI = 3.14;
  // Asking the user to input radius of the circle
  printf("Enter Radius of the Circle\n");
  scanf("%f", &r);

//calculating the area and the circumference of the circle
// AREA OF A CIRCLE = PI*r^2
printf("AREA = %f\n", PI * r * r);
// CIRCUMFERENCE OF A CIRCLE = 2 * PI * r
printf("CIRCUMFERENCE = %f\n", 2 * PI * r);
return 0;

}