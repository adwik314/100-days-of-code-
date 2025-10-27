#include <stdio.h>
int binary(int n);
int main(){
    int n;
    //taking input from the user
    printf("Enter a Non-negative Number:\n");
    scanf("%d", &n);
   // if condition for printing output
    if(n==0){
        printf("Binary is : 0\n");
    }else if (n<0){
        printf("Please enter a Non-negative Number\n");
        main();
    }else {
        printf("Binary Representation of %d is: ", n);
        binary(n);
    }
    return 0;

}
int binary(int n){
    if(n>0){
        binary(n/2);
        printf("%d", n%2);
    }
    return 0;
}