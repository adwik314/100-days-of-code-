#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    double sum = 0;
    double bot = 3;
    double num = 2;
    for(int i=1;i<=n;i++){
        sum = sum + num/bot;
        num+=2;
        bot+=4;
    }
    printf("Approximate Sum: %.1lf", sum);
    return 0;
}