#include <stdio.h>

int main() {
    int p;
    printf("Enter the Percentage: ");
    scanf("%d", &p);

    if (p < 0 || p > 100) {
        printf("Invalid percentage.\n");
        return 1;
    }

    switch (p / 10) {
        case 10: // for 100
        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
       case 5:
            printf("Grade F\n");
            break;
    }

    return 0;
}
