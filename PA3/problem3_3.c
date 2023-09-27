#include <stdio.h>

int main()
{

	int num;
	printf("Enter a number between 1 to 7\n");
	scanf("%d", &num);
	switch (num){
		case 2 : case 3: case 4: case 5: case 6:
			printf("It is a weekday \n");
			break;
		case 1: case 7:
			printf("It is weekend \n");
			break;
}
return 0;
}


