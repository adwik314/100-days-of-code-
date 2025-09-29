#include <stdio.h>
int main (){
int i;
//taking input from the user 
printf("Enter the Number :\n");
scanf("%d", &i);

//checking if even or odd
if (i % 2 == 0)
{
    printf("Number Entered is Even\n");
}
else {
    printf("Number Entered is Odd\n");

}
return 0;
}