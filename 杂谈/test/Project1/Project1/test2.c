#include <stdio.h> 
#define MAX(a,b) (a)>(b)?(a):(b)
int main()
{
	int a = 1;
	int b = 2;
	int c = MAX(2+3, 5*6);
	printf("%d", c);
	return 0;
 } 
