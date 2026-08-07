#include<stdio.h>

int main()
{
char operator ='\0';
double num1 = 0.0;
double num2= 0.0;
double result = 0.0;

printf("Enter the first number:");
scanf("%lf",&num1);

printf("Enter the operators(+,-,*,/):");
scanf(" %c",&operator);// since it had an input buffer i gave a space befor that %c

printf("Enter the second number:");
scanf("%lf",&num2);

switch(operator){

    case '+':
    result = num1 + num2;
    break;

    case '-':
    result = num1 - num2;
    break;

    case '*':
    result = num1 * num2;
    break;

    case '/':
    if(num2==0){
        printf("A number cant be divided by zero\n");
    }
    else{
        result = num1 / num2;
    }
    
    break;
    default:
    printf("Invalid operator\n");

    
}

printf("Result:%.4lf",result);


return 0;



  






}