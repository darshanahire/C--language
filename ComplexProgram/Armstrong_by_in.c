#include<stdio.h>
int main(){
	int num,sum,rem,temp;
	printf("Enter the num upto which u want Armstrong no:");
	scanf("%d",&num);
		int no=1;
	for(int i=1;i<=num;i++){
		sum=0;
		temp=i;
		while(temp>0){
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;}	
		if (sum==i){
			while(no<num){
			printf("%d numberth Armstrong no is %d\n",no,i);
			no=no+1;
		break;
		}
		}}}
		
	