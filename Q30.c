#include <stdio.h>
int main(){
    int n, r;
    //taking input from the user
    printf("Enter Number:\n");
    scanf("%d", &n);
    //loop for reversing the number
    for(; n>0; n = n/10){
        r = n%10;
        printf("%d", r);
        
    }
    return 0;
    
}

