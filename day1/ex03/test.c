#include <stdio.h>

int	main()
{
	int A,B,C,E,F,G;
	
	printf("Range from 1 to 2:");
	scanf("%d", &A);
	printf("Range from 2 to 3:");
	scanf("%d", &B);
	printf("Range from 3 to 1:");
	scanf("%d", &C);

	
	printf("Time from 1 to 2:");
	scanf("%d", &E);
	printf("Time from 2 to 3:");
	scanf("%d", &F);
	printf("Time from 3 to 1:");
	scanf("%d", &G);

	int A1 = A+B+C;
	int B1 = E+F+G;

	float ans = A1 / B1;
	printf("All Range: %d km\n", A1);
	printf("All Time: %d min\n", B1);
	printf("Time avg: %.2f km/hr\n", ans);

	return(0);
}
