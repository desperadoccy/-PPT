#include <stdio.h>

int main()
{
	int n,x;
	printf("左移演示\n");
	printf("%d左移一位后为%d\n",7,7<<1);
	printf("位运算计算2^n演示\n"); 
	scanf("%d",&n);
	printf("2^%d的值为%d\n",n,1<<n);
	printf("右移演示\n");
	printf("%d右移一位后为%d\n",7,7>>1);
	printf("奇偶判断演示\n");
	printf("%d为%d\n",7,7&1);
	printf("%d为%d\n",8,8&1);
	printf("状态压缩演示\n");
	scanf("%d",&x);
	printf("%d十六进制为%x\n",x,x);
	printf("它的每一位是\n");
	while(x)
	{
		printf("%d ",x&1);
		x = x>>1;
	}	 
	return 0;
 } 
