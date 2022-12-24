#include<stdio.h>

int main() {  // you need it 

float n, zero = 0; // declaring number

printf("Enter your number\n"); // printing question
scanf("%f", &n);

printf("Cube of your number is %f \n", n * n * n); // doing the math and printing


printf("Enter 0 to exit the program\n");  // a extra step because why not
scanf("%d", &zero);

return 0; // xD

}