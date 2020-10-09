#include <stdio.h>
int Add(int x,int y);
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Gretter number among %d & %d is %d",a,b,Add(a,b));
}
int Add(int x,int y)
    {
    	if(x>y)
    	{return x;}
      /*	{printf("%d is Gretter no",x);
    	}*/
    	else
    {	return y;}
      /*	{printf("%d is Gretter no",y);
     	}*/
    		
    }