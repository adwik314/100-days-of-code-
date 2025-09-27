#include <stdio.h>
int main(){
int h, m, s;// h = hours, m = minutes, s = seconds
//taking input from the user
printf("Enter time in Seconds\n");
scanf("%d", &s);

//Convert seconds to hours, minutes, and seconds

h = s / 3600; // 1 hours = 3600 seconds
s = s % 3600;
m = s / 60; // 1 minutes = 60 seconds
s = s % 60;
printf("Hours = %d\n", h );
printf("Minutes = %d\n", m );
printf("Seconds = %d\n", s );

return 0;






}