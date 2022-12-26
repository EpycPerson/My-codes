#include <stdio.h>

int main () {

    int sum = 4, age;

printf("This program will check your eligibility based on your answered questions and your age\n");
printf("\n what is 2 + 2?:\t");
scanf("%d", &sum);
if(sum == 4){

    printf("Its correct!\n");
    printf("Enter your age:\t");
scanf("%d", &age);

if(age < 18 && age>1){

printf("Your still a kid lol\n");
}
else 
{
printf("You are eligible for: Drivers licence\n");
}
}
else{

printf("Incorrect!\n");
}


return 0;
}



