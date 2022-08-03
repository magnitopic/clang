#include <stdio.h>

void	hanoi(int disks,char *origin, char *dest, char *aux)
{
	if (disks == 1)
		printf("Disk %d moved from %s to %s\n", disks, origin, dest);
	else
	{
		hanoi(disks - 1, origin, aux, dest);
		printf("Disk %d moved from %s to %s\n", disks, origin, dest);
		hanoi(disks-1, aux, dest, origin);
	}
}

int	main(int argc, char **argv)
{
	hanoi(3, "A", "C", "B");
	return (0);
}