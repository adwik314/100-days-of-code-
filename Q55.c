#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(int i =2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime)
        printf("%d ", i);
    }
    return 0;
}