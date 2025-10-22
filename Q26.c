#include <stdio.h>
int main(){
    int n;
    //taking input from the user
    printf("Enter the number: \n");
    scanf("%d", &n);
    //printing the number from 1 to n using for loop
    for(int i=1;i<=n;i++){
        printf("%d\t", i);
    }
    return 0;
}