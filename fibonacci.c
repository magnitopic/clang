#include <stdio.h>
#include <stdlib.h>

int main()
{
	int second = 0, first = 1, auxiliar;
	for (int i = 1; i < 42; i++)
	{
		auxiliar = second;
		second = first + second;
		first = auxiliar;
	}
	printf("%d", second);

	return 0;
}