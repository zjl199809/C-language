#include<stdio.h>


void tes(int srr[][10])
{
	printf("%d",srr[1][1]);
}


int mian()
{
	int arr[10][10] = {0};
	tes(arr);
	return 0;

}