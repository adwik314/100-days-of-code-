#include <stdio.h>
#include <math.h>
int main (){
    int a, b, c, d, r1, r2;
    //taking input
    printf("Enter the values of a, b , c :\n");
    scanf("%d %d %d", &a, &b, &c);

//checking and calulating discriminant
    d = b*b - 4*a*c;

    if (d == 0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("Roots are real and same: %d\n", r1);
    } else if (d > 0){
      r1 = (-b + sqrt(d))/(2*a);
      r2 = (-b - sqrt(d))/(2*a);
      printf("Roots are real and different: %d, %d\n", r1, r2);
    } else {
        printf("Roots are complex\n");
    }
    return 0;

}