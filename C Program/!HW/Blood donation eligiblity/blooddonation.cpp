#include <stdio.h>

int main()     {

    int age, weight, hb, anyKey;

printf("Please enter your age and other credentials to check eligibility for blood donation\n");
printf("Enter your age: \t");
scanf("%d", &age);

if(age >= 18)
{
printf("Your age is eligible to donate blood!\n");
printf("Lets start working on your other credentials!\n");
printf("Enter your HB: \t");
scanf("%d", &hb);



    if(hb >= 12){
    printf("Your hb is eligible to donate blood!\n");
    printf("Enter your weight: \t");
    scanf("%d", &weight);
      
        if(weight >= 45){

        printf("Your weight is eligible to donate blood!\n");
        
            }else{   
                 printf("Sorry, your weight is not eligible for blood donation.\n");
                }
    }else{
    printf("Sorry, your hb is not eligible for blood donation.\n");
    }
}else{
    printf("Sorry, your age is not eligible for blood donation.\n");
}

printf("Enter any key to exit\n");
scanf("%d", &anyKey);

return 0;
}