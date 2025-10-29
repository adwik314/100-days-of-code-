#include <stdio.h>
int main(){
    int n,k=1;
    //taking input from the user
    printf("Enter a Number: ");
    scanf("%d", &n);
    if(n<=1){
        k = 0;
    }else {
    // loop for checking prime number
    for(int i=2; i<n; i++){
      if (n%i==0){
          k = 0;
          break;
      }
    }
}
    if (k==0){
        printf("Not a Prime Number");
    }else {
        printf("Prime Number");
    }
    return 0;
}