#include <stdio.h>
int main(){
    int n, product = 1;
    //taking input from the user
    printf("Enter the number: \n");
    scanf("%d", &n);
     if(n>1){
    for(int i=2;i<=n;i+=2){
         product *= i; 
        }
    printf("Product: %d\n", product);
    }else {
            printf("There is no even number within the given range\n");
        }
    return 0;
}