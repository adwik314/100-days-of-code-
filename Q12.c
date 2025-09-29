#include <stdio.h>
int main (){
int i;
//taking input from the user 
printf("Enter the Number :\n");
scanf("%d", &i);
//checking if positive, negative or zero.
if (i > 0){
    printf("Number entered is positive\n");
}
else if (i < 0){
    printf("Number entered is Negative\n");
}
else { 
    printf("Zero\n");
}
return 0;
}