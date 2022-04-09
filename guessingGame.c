#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secretNum = 5, guess;

	while (guess != secretNum)
	{
		printf("Your guess: ");
		scanf("%d", &guess);
		if (guess > secretNum)
		{
			printf("The secret number is smaller.\n");
		}
		else if (guess < secretNum)
		{
			printf("The secret number is bigger.\n");
		}
	};
	printf("You have guessed the secret number. Congratulations!\n");
	return 0;
}