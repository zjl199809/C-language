#include<stdio.h>

int jiafa(int x , int y)
{
	return x + y;

}
int jianfa(int x , int y)
{
	return x - y;

}
int chengfa(int x , int y)
{
	return x * y;

}
int chufa(int x , int y)
{
	return x / y;
}
int main()
{
	int(*prr[4])(int,int ) = {jiafa, jianfa, chengfa, chufa};
	int i = 0;
	for(;i<4;i++)
	{
		printf("%d\n",prr[i](1,4));
	
	}
}
//����ָ�룬 ָ��my_strcpy
char(*pf)(char*, const char*) = my_strcpy;
//����ָ������ �ܴ���ĸ�������ַ
char(*pf[4])(char*, const char*) = {pf};