#include <stdio.h>
int main()
{
	int num,a,b;
	printf("*-*-*-*-*-*-*-*-*-*-*CALCULATOR*-*-*-*-*-*-*-*-*-*-*\n");    printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
	for(int j=0; j<=10;j++)
	{
	printf("Select the operation:\n");
	scanf("%d",&num);
	printf("Enter the numbers:\n");
	scanf("%d",&a);
    scanf("%d",&b);
	switch(num){
	case(1):
	printf("ADDITION = %d",a+b);
	break;
	case(2):
	printf("SUBTRACTION = %d",a-b);
	break;
	case(3):
	printf("MULTIPICATION = %d",a*b);
	break;
	case(4):
	printf("DIVISION = %d",a/b);
	break;
	default:
	printf("Enter Valid Input");
                      	}
	printf("\n");
    }
}
	