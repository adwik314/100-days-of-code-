#include <stdio.h>
int main(){
    int n,fact=1;
    //taking input from the user
    printf("Enter the number:\n");
    scanf("%d", &n);
    if(n>=0){
    //loop to calculate factorial
    for(int i=1; i<=n; i++){
    fact *= i;}
    }else {
        printf("Factorial for numbers less than 0 cannot be calculated\n");
    }
    printf("Factorial: %d\n", fact);//output
    return 0;
}