#include <stdio.h>
int main(){
    int n;
    //taking input from the user
    printf("Enter a Number: ");
    scanf("%d", &n);
    //loop for printing the factors
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
    return 0;

}