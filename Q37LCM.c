#include<stdio.h>
int main(){
    int a,b,L;
    printf("Enter 2 Numbers: ");
    scanf("%d%d", &a, &b);
    L=a>b?a:b;
    for(;;){
        if(L%a==0 && L%b==0){
            printf("LCM is %d", L);
            break;
        }
        L++;
    }
return 0;
}