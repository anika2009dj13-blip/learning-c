#include<stdio.h>

int main()
{
int choice = 0;
float pounds = 0.0f;
float kilogram = 0.0f;


printf("Weight Conversion Calculator\n");
printf("1.Kilogram to Pounds\n");
printf("2.Pounds to Kilogram\n");

printf("Enter you choices(1 or 2):");
scanf("%d",&choice);


if(choice==1)
{
    printf("Enter the weight in Kilograms:");
    scanf("%f",&kilogram);
    pounds = kilogram *2.20462;
    printf("%.2f kilograms is equal to %.2f pounds",kilogram,pounds);
}
else if(choice==2)
{
    printf("Enter the weight in pounds:");
    scanf("%f",&pounds);
    kilogram = pounds/2.20462;
    printf("%.2f pounds is equal to %.2f kilograms",pounds,kilogram);

}
else
{
    printf("Invalid choice,Please select Choice 1 or 2");
}
return 0;

}