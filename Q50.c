#include <stdio.h>
int main(){
    int n = 5;
    int nst = 5;
    int nsp = 0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
      }
        printf("\n");
        nst--;
        nsp++;
    }
    return 0;
}







