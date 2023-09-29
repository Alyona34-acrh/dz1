#include <stdio.h>
#include <math.h>
int main()
{
	int d4;
	scanf("%d",&d4);
	putchar ((d4/1000)+48);
	putchar ((d4/100)%10)+48);
	putchar((d4/10)%10+48);
	putchar(d4%10+48);
	return 0;
}














