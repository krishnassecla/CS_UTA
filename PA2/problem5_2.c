#include <stdio.h>

int main() 
{
	float actual_value, assessment_value, tax_value, tax_rate = 0.75/100.00, assessment_rate = 60.00/100.00;
	printf("Enter the actual value of the property: \n");
	printf("$");
	scanf("%f", &actual_value);
	assessment_value = assessment_rate * actual_value;
	tax_value = tax_rate * assessment_value;
	printf("The assessment value is: $%.2f \n", assessment_value);
	printf("The property tax is: $%.2f \n", tax_value);
	return 0;
}
