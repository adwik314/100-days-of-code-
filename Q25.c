#include <stdio.h>
int main(){
    int a,b;
    
    //taking input from user
    printf("Enter 1st Number: \n");
    scanf("%d", &a);
    printf("Enter 2nd Number: \n");
    scanf("%d", &b);
    //asking the user to input the operator
    char ch; 
    printf("Select +, -, *, /, %%\n");
    scanf(" %c", &ch);
    //condition for operations
    switch (ch){
        case '+': printf("%d", a + b);break;
        case '-': printf("%d", a - b);break;
        case '*': printf("%d", a * b);break;
        case '/': if (b!=0){
                  printf("%d", a / b);
                   } else {
                  printf("Division by zero is not define\n");
                  }
                  break;
        case '%': if (b!=0){
                  printf("%d", a % b);
                  } else{
                    printf("Modulo by zero is not define\n");
                  }
                   break;

          default:
          printf("Invalid operator please enter the operator from the given options\n");       

    }
    return 0;
}