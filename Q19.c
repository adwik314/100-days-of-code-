#include <stdio.h>
int main(){
    int l1, l2, l3;
    //Asking the user to input the side lengths.
    printf("Enter the side lengths of the triangle: L1, L2, L3 \n");
    scanf("%d %d %d", &l1, &l2, &l3);

     // Check for triangle validity
    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) {

    // classification of triangles
    if (l1 == l2 && l2 == l3){
        printf("Equilateral\n");
}else if (l1 == l2 || l2 == l3 || l3 == l1){
    printf("Isosceles\n");
}else {
    printf("Scalene\n");
}  
} else {
        printf("The entered side lengths do not form a valid triangle.\n");
    }
return 0;

}