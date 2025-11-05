#include<stdio.h>
int main(){
    int n,r, O = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for( ; n>0; n = n/10){
        r = n%10;
        if(r%2!=0){
            O = O*r;
        }
    }
    printf("Product of Odd Digits is: %d", O);
    return 0;
}