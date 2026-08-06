#include<stdio.h>
#include<stdbool.h>

int main(){

    float price = 10.0f;
bool isStudent= true;
bool isSenior= true;


if(isStudent)
{
    if(isSenior)
    {
        printf("You get a student discount of 10%\n");
        printf("You get a senior discount of 20%\n");
        price *= 0.7;      // 30% total discount
    }
    else
    {
        printf("You get a student discount of 10%\n");
        price *= 0.9;      // 10% discount
    }
}
else
{
    if(isSenior)
    {
        printf("You get a senior discount of 20%\n");
        price *= 0.8;      // 20% discount
    }
}

printf("the price of a ticket is %.2f\n",price);
return 0;
}

