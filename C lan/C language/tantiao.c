
#include<stdio.h>

/*
c���Ծ������⣺��������
int main()
{
	float high = 100;
	int i,j=2;
	float m_h=1, i_h; / m_hΪ�������ܾ��룬i_hΪ��i�ε���ʱ�߶�
	printf("�����뵯��������");
	scanf("%d",&i);
	i_h = high;
	m_h = high;
	if(i == 1)
	{
		printf("�����߶�Ϊ%f",high);
	}
	if(i != 1)
	{
		for(j;j<=i;j++)
		{
			i_h = i_h/2;
			m_h = m_h + i_h*2;
		}
		printf("��%d�ε����߶�Ϊ%f\n",i,i_h);
		printf("�����ܸ߶�Ϊ%f\n",m_h);
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

	printf("ָ��%d",*pa);
	return 0;

}*/

int main()
{
	int a=1 , k = 0, i = 0, z = 1,o=0;
	int  number2 = 0,number3 = 0;
	float number = 0;
	int arr[5] = {1,10,100,1000,10000};
	int *pa = arr;
	printf("����������");
	while(1)
	{
		scanf("%f",&number);
		if(number>100000)
		{
			printf("������һ��С����λ��������");
		}
		if(number-(int)number >0)
		{
			printf("������һ��С����λ��������");
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
	printf("������Ϊ%dλ��\n",k);
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