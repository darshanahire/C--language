#include<stdio.h>
int main(){
	int num;
	int sum=0;
	int arrey[10];
	for(int i=0;i<10;i++)
	{
		printf("Enter %d no Element :",i+1);
		scanf("%d",&num);
		arrey[i]=num;
		sum+=arrey[i];
	}
	printf("Your Entered Arrey is :\n");
	for(int j=0;j<10;j++)
	{
		printf("%d ",arrey[j]);
	}
	printf("\nSum of Arrey Elements is : %d",sum);
}