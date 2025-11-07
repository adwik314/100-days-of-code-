#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i=1;i<=n-1;i++){
        if(n%i==0){ 
            sum = sum + i;
    }
}
if(n==sum) printf("The Number %d is a Perfect Number",n);
else printf("Not a Perfect Number");
return 0;
}