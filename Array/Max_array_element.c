#include<stdio.h>
int main(){
	int num;
	int max=0;
	int arrey[10];
	for(int i=0;i<10;i++)
	{
		printf("Enter %d no Element :",i+1);
		scanf("%d",&num);
		arrey[i]=num;
	}
	printf("Your Entered Arrey is :\n");
	for(int j=0;j<10;j++)
	{
		printf("%d ",arrey[j]);
		if(max<arrey[j]){
			max=arrey[j];}
	}
	printf("\nMaximum of Element of arrey is : %d",max);
}