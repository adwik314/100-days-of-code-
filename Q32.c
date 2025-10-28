#include <stdio.h>
int main(){
    int a,n,r;
    int s = 0;
    //taking input from the user
    printf("Enter a Number: ");
    scanf("%d", &n);
    a=n;
    //loop for checking the input number is palindrome
    for(; n>0 ; n = n/10){
        r = n%10;
        s = r + s*10;
    }
    if(a==s){
        printf("Palindrome Number\n");
    }else {
        printf("Not a Palindrome Number\n");
    }
    return 0;

}