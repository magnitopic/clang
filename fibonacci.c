#include <stdio.h>
#include <stdlib.h>

int main()
{
	int one = 1, two = 0;
	for (int i = 1; i < 41; i++)
	{
		one = one + two;
		two = one - two;
	}
	printf("%d", one);

	return 0;
}