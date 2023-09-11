#include <stdio.h>

int main() {
//declare, init and print three integer variables
// 333333
int num1 = 7;

//if variable is not assigned it will have a garbage value
int numG;
printf("%d", numG);
int num2 = 12, num3 = 90;
printf("The numbers are %d, %d, %d, %d \n", num1, num2, num3, numG);
printf("The garbage value is %d \n", numG);
printf("%d", numG);
return 0;
}
