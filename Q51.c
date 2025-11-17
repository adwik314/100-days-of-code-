#include <stdio.h>
int main(){
    int n = 5;
    int nsp = n - 1;
    for(int i=0;i<n;i++){
        int temp = n-i;
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d", temp);
            temp++;
        }
        printf("\n");
        nsp--;
    }
    return 0;
}