#include <stdio.h>

int main() 
{
	float actual_value, assessment_value, tax_value, tax_rate;
	tax_rate = 0.75 / 100.00;
	printf("Enter the actual value of the property $");
	scanf("%f", &actual_value);
	printf("\n");
	assessment_value = (60.0/100.0) * actual_value;
	tax_value = tax_rate * assessment_value;
	printf("The assessment value is $%.2f \n", assessment_value);
	printf("The tax is $%.2f \n", tax_value);
	return 0;
}
