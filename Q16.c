#include <stdio.h>
int main (){
    int a,b,c;
    // taking inputs
    printf("Enter 1st Number :\n");
    scanf("%d", &a);
    printf("Enter 2nd Number :\n");
    scanf("%d", &b);
    printf("Enter 3rd Number :\n");
    scanf("%d", &c);
    // checking condition which is greater
    if (a == b && b == c) {
        printf("All numbers are equal: %d\n", a);
    } else if (a >= b && a >= c) {
        printf("Largest is: %d\n", a);
    } else if (b >= c) {
        printf("Largest is: %d\n", b);
    } else {
        printf("Largest is: %d\n", c);
    }
    return 0;
}
