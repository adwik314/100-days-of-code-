#include <stdio.h>
int main(){
    int days, fine;
    //asking the user to input the days
    printf("Enter the Number of Days: \n");
    scanf("%d", &days);
    // calculating fine
    if(days<=0){
        printf("No fine applied\n");
    }else if(days<=5){
        fine = 2*days;
        printf("Fine: %d\n", fine);
    }else if(days<=10){
        fine = (5*2) + (days - 5)*4;
        printf("Fine: %d\n", fine);
    }else if(days<=30){
        fine = (5*2) + (5*4) + (days-10)*6;
        printf("Fine: %d\n", fine);
    }else {
        printf("Membership Cancelled\n");
    }
    return 0;


}