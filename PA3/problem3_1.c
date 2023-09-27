#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers : \n");
	scanf("%d %d", &a, &b);
	if (a%b==0) {
		printf("The first number is divisible by the second number");
}
	else {
		printf("The first number is not divisble by the second number");
}
return 0;
}
