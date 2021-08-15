# include<stdio.h>


void point(int* p[])
{

	printf("%d",*(p[1]+2));

}
void point2(int(*p)[])
{

	printf("%d",p);

}
int main()
{
	//char ch ='h';
//	char p[] = "hello word";
	int pr[10] = {1};
	//int pr2[] = {5,6,7,8};
	//int* prr[2];
//	prr[0] = pr2;
	//prr[1] = pr;
	//point(prr);

	int (*p2)[10]= &pr;
	printf("%d",p2[1]);
	return 0;
}