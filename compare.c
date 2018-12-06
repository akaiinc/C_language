#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max1(int x,int y);
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max1(a,b);
	printf("max1=%d\n",c);
	system("pause");
	return 0;
	
}
int max1(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return(z);

}