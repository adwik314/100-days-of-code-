#include <stdio.h>
int main (){
    int year;
    //taking input from the user 
    printf("Enter the Year\n");
    scanf("%d", &year);

    //checking if the year entered by the user is leap year
   if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
         printf("Leap Year\n");
    }
    else {
        printf("Not a  Leap Year\n");
    }
    return 0;
}