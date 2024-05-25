#include <stdio.h>

int main(){
    float a,b;
    char operation;

    printf("Enter the first number here ");
    scanf("%f",&a);
    printf("Enter the second number here ");
    scanf("%f",&b);

    printf("Enter the operation +, - , * , / ");
    scanf("%s",&operation);

    if (operation == '+'){
        printf("%f + %f is equal to %f",a,b,a+b);
    }
    else if (operation =='-'){
         printf("%f - %f is equal to %f",a,b,a-b);
    }
    else if (operation =='*'){
         printf("%f * %f is equal to %f",a,b,a*b);
    }
    else if (operation =='/'){
         printf("%f/%f is equal to %f",a,b,a/b);
    }
}
