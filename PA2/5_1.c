#include<stdio.h>

int main()
{
	float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, tax = 0.07 ,subtotal, total;
	printf("Item 1 %f \n Item2 %f \n Item3 %f \n Item4 %f \n Item5 %f \n", item1, item2, item3, item4, item5);
	subtotal = item1 + item2 + item3 + item4 + item5;
	total = subtotal + tax * subtotal;
	printf("Subtotal %f", subtotal);
	printf("Total %f", total);
	return 0;  
}
 