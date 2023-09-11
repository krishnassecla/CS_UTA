#include <stdio.h>

int main() 
{
	float actual_value, assessment_value, tax_value, tax_rate;
	float x = 60.00/100.00;
	printf("%f", x);
	tax_rate = 0.75 / 100.00;
	printf("Enter the actual value of the property: \n");
	scanf("%f", &actual_value);
	assessment_value = x * actual_value;
	tax_value = tax_rate * assessment_value;
	printf("The assessment value is: %f \n", assessment_value);
	printf("The tax is: %f \n", tax_value);
	return 0;
}
