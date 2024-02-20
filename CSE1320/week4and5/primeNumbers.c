#include <stdio.h>
int isPrime(int number);

int main(){
	int start, end;
	printf("Enter the interval for the prime numbers:");
	printf("Start:");
	scanf("%d", &start);
	printf("End:");
	scanf("%d", &end);
	printf("The prime numbers between the interval are");
	for (int i=start; i<=end; i++){
		if (isPrime(i) && i != 1){
			printf("%d \n", i);
		};
	}
}

int isPrime(int number){
	int divisor = 0;
	int prime = 1;
	for (int i=1; i<=number; i++){
		if ((number % i) == 0){
			divisor++;
		}
		if (divisor >2){
			prime = 0;
			return prime;
		}
	}
	return prime;
}

