#include<stdio.h>

int main() {  // you need it 

int side1, side2, zero = 0;  // declaring the variables
printf("Enter length of your rectangle.\n"); //printing question and scanning
scanf("%d", &side1);

printf("Enter breadth of your rectangle.\n");
scanf("%d", &side2);

printf("Perimeter of your rectangle is= %d\n", 2 * side1 * side2); // doing the math using your given values

printf("Enter 0 to exit the program\n");  // a extra step because why not
scanf("%d", &zero);

return 0; // xD

}