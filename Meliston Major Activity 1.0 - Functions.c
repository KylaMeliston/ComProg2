/*+ Write a program in C to calculate and print the Electricity bill of a given customer.
+ The customer ID., and Unit Consumed by the user should be inputted.
+ Print All Customer Data (Customer ID., Unit Consumed, Unit Charges, Surcharge, Customer Total Bill)*/


#include <stdio.h>
#include <string.h>
int main(void)
{
   int id, unit;
   char cus[25];
   float num1, sum=0, n,num;
   

   printf("Input Customer ID :");
   scanf("%d",&id);
   printf("Input the name of the customer :");
   scanf("%s",cus);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   
   if (unit >199 )
	num1 = 2.00;
   else	if (unit>=250 && unit<400)
		num1 = 1.85;
	else if (unit>=450 && unit<600)
			num1 = 1.60;
		else
			num1 = 1.50;
   n = unit*num1;
   if (n>300)
	sum = n*10/100.0;
   num = n+sum;
   if (n < 100)
    n = 100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                        :%d\n",id);
   printf("unit Consumed                       :%d\n",unit);
   printf("Unit Charges @P %4.2f  per unit      :P%8.2f\n",num1,n);
   printf("Surchage Amount                     :P%8.2f\n",sum);
   printf("Total Customer Bill                 :P%8.2f\n",num);

}