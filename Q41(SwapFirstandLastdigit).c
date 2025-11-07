#include <stdio.h>
int main(){
    long n, rem,r;
    long rev = 0;
    printf("Enter a Number:");
    scanf("%ld", &n);
    long temp = n;
    for ( ; temp>0;temp=temp/10){
        rem = temp%10;
        rev = rev*10 + rem;
    }
   long swap = 0;
   while(n>0){
       if(swap==0 || n<10){
           r = n%10;
       }else {
           r = rev%10;
       }
       swap = swap*10 + r;
       n = n/10;
       rev = rev/10;
   }
    
    printf("%ld", swap);
    return 0;
}