#include <stdio.h>
int main(){
    int n, oddnumber = 1, sum = 0;
    //taking input from the user
    printf("Enter the number: \n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
         sum += oddnumber;
         oddnumber += 2;
        } 
    printf("Sum: %d\n", sum);
    return 0;
}