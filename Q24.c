#include <stdio.h>

int main() {
  
    int u;
    float b;
    printf("Enter the units consumed:");
    scanf("%d", &u);
    if(u<0){
        printf("Consumed unit cannot be in negative\n");
    }else if(u<=100){
        b = 5*u;
    
    }else if(u<=200){
        b = (5*100) + (u-100)*7;
    
    }else if(u<=300){
        b = (5*100) + (7*100) + (u-200)*10;
      
        }else{
            b = (5*100) + (7*100)  + (10*100) + (u-300)*12;
         
        }
   printf("Bill: Rs%.2f", b);

    return 0;
}