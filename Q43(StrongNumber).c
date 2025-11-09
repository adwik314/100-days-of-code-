#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int temp = n;
    int s = 0;
    for( ; temp>0;temp = temp/10){
        int rev = 0;
        rev = temp%10;
        int f = 1;
        for(int i=1;i<=rev;i++){
            f = f*i;
        }
        s = s + f;
    }
    (n==s)?printf("Strong Number"):printf(" Not a Strong Number");
    return 0;
}