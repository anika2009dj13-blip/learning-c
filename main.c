#include <stdio.h>

int main()
{
   char item[50]="";
   float price= 0.0f;
   int quantity= 0;
   char currency = '$';
   float total =0.0f;
   
   printf("what item would you like to buy?:");
   fgets(item,sizeof(item),stdin);

   printf("What is the price for each:");
   scanf("%f",&price);
   printf("how many would you like?:");
   scanf("%d",&quantity);
   total=price*quantity;
   
   printf("\nyou have bought %d %s\n",quantity,item);
   printf("%c%.2f",currency,total);
       return 0;
}