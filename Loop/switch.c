#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the number:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("You have Enter one");
		case 2:
		printf("You have Enter Two");
		break;
		default :
		printf("Your Entry is out of Range");
	}
}