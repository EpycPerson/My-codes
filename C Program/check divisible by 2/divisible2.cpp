#include<stdio.h>
#include<math.h>

int main(){

    int x, zero = 0;

    printf("Enter your Number to check if its divisible by 2.\n");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);

    
    return 0;

}