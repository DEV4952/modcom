#include<stdio.h>

int	main()
{
	int a,b,c,d,e;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int sum = a+b+c+d+e;
	float ans = sum / 5.0;

	printf("%.2f",ans);
	return(0);
}
