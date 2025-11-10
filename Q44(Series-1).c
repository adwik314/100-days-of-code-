#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    double sum = 0;
    double bot = 4;
    double num = 3;
    for(int i=1;i<=n;i++){
        sum = sum + num/bot;
        num+=2;
        bot+=2;
    }
    sum = sum + 1;
    printf("Approximate Sum: %.1lf", sum);
    return 0;
}