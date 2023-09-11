#include <stdio.h>

int main() 
{
	float score1, score2, score3, score4, score5, avg_score;
	printf("Enter test score for the first subject: \n");
	scanf("%f", &score1);
	printf("Enter test score for the second subject: \n");
	scanf("%f", &score2);
	printf("Enter test score for the third subject: \n");
	scanf("%f", &score3);	
	printf("Enter test score for the fourth subject: \n");
	scanf("%f", &score4);
	printf("Enter test score for the fifth subject: \n");
	scanf("%f", &score5);	
	avg_score = (score1 + score2 + score3 + score4 + score5) / 5.0;
	printf("Your average score is: %.1f \n", avg_score);
	return 0;
}
