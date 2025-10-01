#include <stdio.h>
int main (){
    char ch;
    //taking input from the user 
    printf("Enter an Alphabet\n");
    scanf("%c", &ch);
    // if condition for checking if the alphabet entered is a leter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
         // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("Vowel\n");
        }else {printf("Consonant\n");
        }
    }else {
        printf("Enter a valid Alphabet\n");
    }
    return 0;
}