
#include<stdio.h>

/*
c语言经典例题：弹跳问题
int main()
{
	float high = 100;
	int i,j=2;
	float m_h=1, i_h; / m_h为弹跳的总距离，i_h为第i次弹跳时高度
	printf("请输入弹跳次数：");
	scanf("%d",&i);
	i_h = high;
	m_h = high;
	if(i == 1)
	{
		printf("弹跳高度为%f",high);
	}
	if(i != 1)
	{
		for(j;j<=i;j++)
		{
			i_h = i_h/2;
			m_h = m_h + i_h*2;
		}
		printf("第%d次弹跳高度为%f\n",i,i_h);
		printf("弹跳总高度为%f\n",m_h);
	}
	return 0;

}
*/
/*
int main()
{
	int a = 0 ;
	int * pa = &a;
	scanf("%d",pa);

	printf("指针%d",*pa);
	return 0;

}*/

int main()
{
	int a=1 , k = 0, i = 0, z = 1,o=0;
	int  number2 = 0,number3 = 0;
	float number = 0;
	int arr[5] = {1,10,100,1000,10000};
	int *pa = arr;
	printf("请输入数字");
	while(1)
	{
		scanf("%f",&number);
		if(number>100000)
		{
			printf("请输入一个小于五位数的整数");
		}
		if(number-(int)number >0)
		{
			printf("请输入一个小于五位数的整数");
		}
		if(number<100000&& (number-(int)number) ==0)
		{
			break;
		}
	}
	number2 = number;
	while(a!=0)
	{
		number = number/10;
		a = (int)number;
		k++;
	}
	o=k;
	printf("该数字为%d位数\n",k);
	for(i;i<o;i++)
	{
		number3 = number2/arr[k-1];
		z = (int)number3;
		printf("%d\n",z);
		z = z * (*(pa+k-1));//arr[k-1];
		number2 = number2 - z;
		k--;
	}
	return 0;

}