#include<stdio.h>
#include<math.h>

int main () {

    int x;

    printf("Enter your Number:\n");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);

    return 0;
}