#include<stdio.h>
int main()
{
	int num[30];
	num[0]=1;
	num[1]=1;
	for(int i = 2; i < 30 ; i++)
	{
		num[i] = num [ i-1 ] + num [ i-2 ] ;
	}
	for(int i = 0 ; i < 30 ; i ++)
	{
		printf("%3d \n",num[i]);
	}
	return 0 ; 
}
