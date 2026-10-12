#include<stdio.h>
void badSwap(int a,int b)
{
	int swap=a;
	a=b;
	b=swap;
}
    void swap(int*a,int*b)
    {
    	int swap=*a;
    	*a=*b;
    	*b=swap;
	}
	int main()
	{
		int a=5,b=8;
		badSwap(a,b);
		printf("after badSwap:%d %d\n",a,b);
		
		swap(&a,&b);
		printf("after badSwap:%d %d\n",a,b);
		return 0;
    }
