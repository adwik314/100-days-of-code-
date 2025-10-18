#include <stdio.h>
int main(){
    float cp, sp, profit;
    float percentage;
    //Asking the user to input cost price and selling price
    printf("Enter Cost Price: \n");
    scanf("%f", &cp);
    printf("Enter Selling Price: \n");
    scanf("%f", &sp);
    //calculating profit 
    profit = sp-cp;
    percentage = (profit/cp)*100;

//checking if there is profit or loss
    if(profit>0){
        printf("Profit : %.0f%% \n", percentage);
    }else if (profit<0){
      printf("Loss : %.0f%% \n", -1*percentage);
    }else{
        printf("No Profit No Loss");
    }
    return 0;

    }
