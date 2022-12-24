#include<stdio.h>
int main() 

{

int side, zero = 0; 
printf("Enter side of your square in order to get to area of it.\n");
scanf("%d", &side);

printf("Area of your square is %d \n", side * side);

printf("Enter 0 to exit program \n", zero);
scanf("%d", zero);

return 0;
}