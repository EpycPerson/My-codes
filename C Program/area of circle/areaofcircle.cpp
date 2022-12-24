#include<stdio.h>
int main() {

float radius, pi = 3.14, zero = 0;

printf("Enter radius to find area of it.\n");
scanf("%f", &radius);

printf("Area of your square is= %.2f \n", radius * radius * pi); 

printf("\nEnter 0 to exit\n");
scanf("%f", &zero);


return 0;

}
