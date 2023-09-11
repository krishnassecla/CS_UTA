#include<stdio.h>

int main()
{
	float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, tax = 0.07 ,subtotal, total, tax_amount;
	printf("Item 1 %.2f \nItem 2 %.2f \nItem 3 %.2f \nItem 4 %.2f \nItem 5 %.2f \n", item1, item2, item3, item4, item5);
	subtotal = item1 + item2 + item3 + item4 + item5;
	tax_amount = tax * subtotal;
	total = subtotal + tax * tax_amount;
	printf("Subtotal %.2f \n", subtotal);
	printf("Total %.2f \n", total); 
	return 0;  
}
 