#include <stdio.h>

int main()
{
	int n,x;
	printf("������ʾ\n");
	printf("%d����һλ��Ϊ%d\n",7,7<<1);
	printf("λ�������2^n��ʾ\n"); 
	scanf("%d",&n);
	printf("2^%d��ֵΪ%d\n",n,1<<n);
	printf("������ʾ\n");
	printf("%d����һλ��Ϊ%d\n",7,7>>1);
	printf("��ż�ж���ʾ\n");
	printf("%dΪ%d\n",7,7&1);
	printf("%dΪ%d\n",8,8&1);
	printf("״̬ѹ����ʾ\n");
	scanf("%d",&x);
	printf("%dʮ������Ϊ%x\n",x,x);
	printf("����ÿһλ��\n");
	while(x)
	{
		printf("%d ",x&1);
		x = x>>1;
	}	 
	return 0;
 } 
