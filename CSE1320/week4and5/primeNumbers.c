#include <stdio.h>

int main(){
	int start, int end;
	printf("Enter the interval for the prime numbers:");
	printf("Start(at least 2) :");
	scanf("%d", &start);
	printf("End:");
	scanf("%d", &end);
	for (int i=2; i<=end; i++):{
		checkIfPrime(i);


int checkIfPrime(int number){
	int divisor = 0;
	for (int i=2; i<=number; i++){
		if (number % i) == 0{
			divisor++;
}	
	}
