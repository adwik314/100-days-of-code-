#include <stdio.h>
int main(){
    int a,n,r;
    int s = 0;
    //taking input from the user
    printf("Enter a Number: ");
    scanf("%d", &n);
    a=n;
    //loop for checking armstrong number
    for(; n>0; n = n/10){
        r = n%10;
        s = r*r*r + s;
    }
    if(a==s){
        printf("Armstrong Number\n");
    }else{
        printf("Not a Armstrong Number");
    }
    return 0;
}