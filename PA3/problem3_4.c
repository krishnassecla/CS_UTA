#include <stdio.h>

int main() {
	float cost, weight;
	printf("Enter the weight of the package: \n");
	scanf("%f", &weight);
	if (weight <= 2){
		cost = 5.00;
	}
	else if (weight>2 && weight<=10) {
		cost = 10.00;
	}
	else {
		cost = 15.00;
	}
	printf("The cost of shipping the package is %.2f \n", cost);
	return 0;
}
