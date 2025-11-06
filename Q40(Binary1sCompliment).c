#include <stdio.h>
int main(){
    int n;
    printf("Enter the Binary Number: ");
    scanf("%d", &n);
    while(n>0){
       int r = n%10;
       if(r==1){
           r=0;
           printf("%d",r);
       }else if(r==0){
           r=1;
           printf("%d",r);
       }
       n = n/10;
    }
    return 0;
}