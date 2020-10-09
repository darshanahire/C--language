#include <stdio.h>
#include <conio.h>
int main(){
	int a,no,cube=0;
	printf("Enter any no: ");
	scanf("%d",&a);
	int temp=a;
	while(a>0){
		no=a%10;
		cube=cube+(no*no*no);
		a=a/10;}
	if(temp==cube){
		printf("no is armstrong");}
	else{
		printf("no is not armstrong");
	}
}
